from collections import Counter
from math import ceil
import argparse
import json
import sys

words = [line.rstrip() for line in sys.stdin]
tabchar = "\t"

def pad(p, l=8, w="\0"):
    if len(p) % l:
        return p + (w * (l - (len(p) % l)))
    else:
        return p

def swap_uint64(val):
    val = ((val << 8) & 0xFF00FF00FF00FF00 ) | ((val >> 8) & 0x00FF00FF00FF00FF )
    val = ((val << 16) & 0xFFFF0000FFFF0000 ) | ((val >> 16) & 0x0000FFFF0000FFFF )
    return ((val << 32) | (val >> 32)) & 0xffffffffffffffff

def swap_uint32(val):
    val = ((val << 8) & 0xFF00FF00 ) | ((val >> 8) & 0xFF00FF )
    return ((val << 16) | (val >> 16)) & 0xffffffff

# def splitinhalf(i):
#     n = int(len(i) / 2)
#     return [
#         i[0:n],
#         i[n:]
#     ]

def bucketsofsize(i, size):
    buf = []
    for v in i:
        buf.append(v)
        if len(buf) == size:
            yield buf
            del buf[:]

    if buf:
        yield buf

itoword = {}

def collect_by_position(words):
    def toint(s):
        r = 0
        l = len(s)
        for idx in xrange(l):
            r += ord(s[idx]) << (8 * (l - 1 - idx))
        itoword[r] = s
        return r

    ret = {}

    # Collect by prefix.
    for word in words:
        if len(word) == 1:
            ret.setdefault(toint(word[0:8]), set()).add('')
        else:
            ret.setdefault(toint(word[0:8]), set()).add(word[8:])

    for prefix, words in ret.iteritems():
        ret[prefix] = collect_by_position(
            [word for word in words if word]
        )

    return ret

lenToWords = {}
for word in words:
    lenToWords.setdefault(len(word), set()).add(pad(word))

def print_switch(tree, level=0, maxlevel=9001, length=1, prefix=tabchar):
    keyspace = sorted(tree.keys(), key=swap_uint64)

    if level >= maxlevel:
        r = length % 8
        if r == 0:
            nchars = 8
        else:
            nchars = r
    else:
        nchars = 8

    print prefix + (tabchar * level) + "switch(wp[" + str(level) + "] | (uint64_t)(0x" + ((8 - nchars) * '00') + (nchars * '20') + ")){"  # 0x2020202020202020
    for idx, case in enumerate(keyspace):
        subtree = tree[case]
        if level >= maxlevel:
            print prefix + (tabchar * level) + "case " + str("0x%016X" % swap_uint64(case)) + ":return 1;" #+ " // Word: %s" % itoword[case]
        else:
            print prefix + (tabchar * level) + "case " + str("0x%016X" % swap_uint64(case)) + ":" #+ " // Word: %s" % itoword[case]
            print_switch(subtree, level=level + 1, maxlevel=maxlevel, length=length, prefix=prefix)
    print prefix + (tabchar * level) + "default:return 0;"
    print prefix + (tabchar * level) + "}" # endswitch

    #partitions = bucketsofsize(keyspace, 20)
    #for pidx, partition in enumerate(partitions):
    #    p_min = partition[0]
    #    p_max = partition[-1]
    #
    #    if len(partition) == 1:
    #        print prefix + (tabchar * level) + ("} else " if pidx > 0 else "") + "if (wp[%d] == 0x%016X) {" % (level, swap_uint64(p_min))
    #        if level >= maxlevel:
    #            print prefix + (tabchar * (level + 1)) + "return 1;"
    #        else:
    #            subtree = tree[partition[0]]
    #            print_switch(subtree, level=level + 1, maxlevel=maxlevel, prefix=prefix)
    #            print prefix + (tabchar * (level + 1)) + "return 0;"
    #    else:
    #        print prefix + (tabchar * level) + ("} else " if pidx > 0 else "") + "if (wp[%d] >= 0x%016X && wp[%d] <= 0x%016X) {" % (level, swap_uint64(p_min), level, swap_uint64(p_max))
    #
    #        print prefix + (tabchar * (level + 1)) + "switch(wp[" + str(level) + "]){"
    #        for idx, case in enumerate(partition):
    #            subtree = tree[case]
    #
    #            if level >= maxlevel:
    #                print prefix + (tabchar * (level + 1)) + "case " + str("0x%016X" % swap_uint64(case)) + ":return 1;" #+ " // Word: %s" % itoword[case]
    #            else:
    #                print prefix + (tabchar * (level + 1)) + "case " + str("0x%016X" % swap_uint64(case)) + ":" #+ " // Word: %s" % itoword[case]
    #                print_switch(subtree, level=level + 1, maxlevel=maxlevel, prefix=prefix)
    #        print prefix + (tabchar * (level + 1)) + "default:return 0;"
    #        print prefix + (tabchar * (level + 1)) + "}" # endswitch

    # print prefix + (tabchar * level) + "} else {"
    # print prefix + (tabchar * (level + 1)) + "return 0;"
    # print prefix + (tabchar * level) + "}" # endif

parser = argparse.ArgumentParser()
parser.add_argument('--length', type=int, default=0)
args = parser.parse_args()

print "#include <stdint.h>"

lengths = sorted(lenToWords.keys())
for idx, l in enumerate(lengths):
    if args.length != l:
        continue

    w = lenToWords[l]
    print "unsigned int contains%d(uint64_t * wp) {" % l
    print_switch(
        collect_by_position(w),
        maxlevel=(ceil(((l - 1) / 8))),
        prefix=(tabchar),
        length=l
    )
    print "}"

if args.length > 0:
    exit()

print "unsigned int nope(uint64_t * wp) { return 0; }"
print "typedef unsigned int (*contains_fn)(uint64_t *);";
for l in lengths:
    print "unsigned int contains%d(uint64_t *);" % l
print "unsigned int contains(char * word, int len){"
print tabchar + "uint64_t * wp = (uint64_t *)word;"
fns = [("contains%d" % l if l in lengths else "nope") for l in xrange(100)]
print tabchar + "contains_fn jumptable[] = {" + ", ".join(fns) + "};"
print tabchar + "return jumptable[len](wp);"
print "}"
