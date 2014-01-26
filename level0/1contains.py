import json
import sys
from collections import Counter
from math import ceil

# words = ["fooo", "bar", "bo", "boo", "boooo", "booooo", "boooooo"]
words = [line.rstrip() for line in sys.stdin]
# words = [word for word in words if len(word) == 8]
# words = ["smarkets"]

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

tabchar = ""

# words = [line.rstrip() for line in sys.stdin]
# words = ["foo", "bar", "fo"]

lenToWords = {}
for word in words:
    lenToWords.setdefault(len(word), set()).add(pad(word))

# print json.dumps(lenToWords, indent=2)
# exit()

# def print_contains(words, name='contains'):
# def collect_by_index(words):
#     tree = {}
#     for word in words:
#         for index, character in enumerate(word):
#             tree.setdefault(index, Counter())[character] += 1
#         tree.setdefault(index + 1, Counter())[None] += 1
#     ret = {}
#     for level, c in tree.iteritems():
#         ret[level] = sorted(c.keys(), key=lambda v: c[v], reverse=True)
#     return ret

# index_priority = collect_by_index(words)

def print_switch(tree, level=0, maxlevel=9001, prefix=tabchar):
    # print prefix + (tabchar * level) + 'printf("0x%08X\\n", wp[' + str(level) + ']);'

    print prefix + (tabchar * level) + "switch(wp[" + str(level) + "]){"
    # print prefix + (tabchar * level) + "if (word[" + str(level) + "] == '" + case.lower() + "') { return 1; }"
    # print prefix + (tabchar * level) + "if (word[" + str(level) + "] == '\\0') { return 1; }"

    # for idx, case in enumerate(sorted(tree.keys(), key=lambda c: index_priority[level].index(c))):
    # for idx, case in enumerate(sorted(tree.keys(), key=ord)):
    for idx, case in enumerate(sorted(tree.keys(), key=swap_uint64)):
        subtree = tree[case]

        if case is None:
            print prefix + (tabchar * (level + 1)) + "case '\\0':return 1;"
            # print prefix + (tabchar * level) + ("} else " if idx > 0 else "") + "if (word[" + str(level) + "] == '\\0') { return 1;"
            # print prefix + (tabchar * level) + ("} else " if idx > 0 else "") + "if (1) { return 1;"
        else:
            if level >= maxlevel:
                # print prefix + (tabchar * (level + 1)) + "case '" + case.lower() + "':return 1;"
                print prefix + (tabchar * level) + "case " + str("0x%016X" % swap_uint64(case)) + ":return 1;" #+ " // Word: %s" % itoword[case]
            else:
                # print prefix + (tabchar * (level + 1)) + "case '" + case.lower() + "':"
                print prefix + (tabchar * level) + "case " + str("0x%016X" % swap_uint64(case)) + ":" #+ " // Word: %s" % itoword[case]
                # print prefix + (tabchar * level) + ("} else " if idx > 0 else "") + "if (word[" + str(level) + "] == '" + case.lower() + "') {"
                # print prefix + (tabchar * (level + 1)) + "case '" + case.upper() + "':"
                print_switch(subtree, level=level + 1, maxlevel=maxlevel, prefix=prefix)

    print prefix + (tabchar * level) + "default:return 0;"
    # print prefix + (tabchar * level) + "} else { return 0; }"
    print prefix + (tabchar * level) + "}"

# print "inline unsigned int %s(char * word) {" % name
# print_switch(
#     collect_by_position(words)
# )
# print "}"

# print json.dumps(collect_by_index(words), indent=2)
# exit();

import argparse

parser = argparse.ArgumentParser()
parser.add_argument('--length', type=int, default=0)
args = parser.parse_args()

# print "#include <stdbool.h>"
# print "#include <stdio.h>"
print "#include <stdint.h>"

# for l, w in lenToWords.iteritems():
#     print_contains(w, name='contains%d' % l)

# print "unsigned int contains(char * word, int len){"
# print tabchar + "uint64_t * wp = (uint64_t *)word;"
# print tabchar + "switch(len){"
# for idx, l in enumerate(sorted(lenToWords.iterkeys(), key=lambda k: len(lenToWords[k]), reverse=True)):
lengths = sorted(lenToWords.keys())
for idx, l in enumerate(lengths):
    if args.length != l:
        continue

    w = lenToWords[l]
    # print tabchar + "if (len == %d) { return contains%d(word); }" % (l, l)
    # print tabchar + ("} else " if idx > 0 else "") + ("if (len == %d) {" % l)
    # print tabchar + tabchar + "case %d:" % l
    print "unsigned int contains%d(uint64_t * wp) {" % l
    print_switch(
        collect_by_position(w),
        maxlevel=(ceil(((l - 1) / 8))),
        prefix=(tabchar)
    )
    print "}"


# print tabchar + "} else {"
# print tabchar + tabchar + "return 0;"
# print tabchar + "}"
# print tabchar + tabchar + "default:return 0;"
# print tabchar + "}"

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
