from hashlib import sha1

def githash(data, objtype='blob'):
    s = sha1()
    s.update(objtype + " %u\0" % len(data))
    s.update(data)
    return s.hexdigest()


base_commit = """tree 9553d91ca2fcef5a9ee7178e38cdfa9605af20ef
parent 000000f90e262c8df1af70e3a73a63cd71200b89
author CTF user <me@example.com> 1390419400 +0000
committer CTF user <me@example.com> 1390419400 +0000

Give me a Gitcoin

"""

difficulty = '000001'

import argparse
parser = argparse.ArgumentParser()
parser.add_argument('--start', type=int, default=0)
args = parser.parse_args()

i = args.start

while True:
	commit = base_commit + str(i)
	commit_sha = githash(commit, objtype='commit')
	if commit_sha < difficulty:
		print commit_sha
		print commit
		break

	i += 1
