#include <stdio.h>
#include <openssl/sha.h>
#include <string.h>
#include <stdint.h>


int main(int argc, const char *argv[])
{
	if (argc != 5) {
		fprintf(stderr, "usage: ./miner <tree> <parent> <difficulty> <seed>\n");
		return 1;
	}

	// char * tree = "9553d91ca2fcef5a9ee7178e38cdfa9605af20ef";
	const char * tree = argv[1];
	// char * parent = "000000f90e262c8df1af70e3a73a63cd71200b89";
	const char * parent = argv[2];
	// char * difficulty = "000001";
	const char * difficulty = argv[3];

	const char * seed = argv[4];

	char cmdDifficulty[41] = {0};

	SHA_CTX current, initial;
	unsigned char buffer[SHA_DIGEST_LENGTH] = {0};
	char nonceBuffer[17] = {0};

	SHA1_Init(&initial);
	SHA1_Update(&initial, "commit ", 7);
	char lenBuf[10] = {};
	sprintf(lenBuf, "%d", (int)(216 + strlen(seed)));
	SHA1_Update(&initial, lenBuf, strlen(lenBuf));
	SHA1_Update(&initial, "\0", 1);
	SHA1_Update(&initial, "tree ", 5);
	SHA1_Update(&initial, tree, 40);
	SHA1_Update(&initial, "\n", 1);
	SHA1_Update(&initial, "parent ", 7);
	SHA1_Update(&initial, parent, 40);
	SHA1_Update(&initial, "\n", 1);
	SHA1_Update(&initial, "author CTF user <me@example.com> 1390419400 +0000\n", 50);
	SHA1_Update(&initial, "committer CTF user <me@example.com> 1390419400 +0000\n", 53);
	SHA1_Update(&initial, "\n", 1);
	SHA1_Update(&initial, seed, strlen(seed));
	SHA1_Update(&initial, "\n\n", 2);

	uint32_t i, j;
	for (i = 0; i < 4294967295; i++) {
		for (j = 0; j < 4294967295; j++) {
			memcpy(&current, &initial, sizeof(SHA_CTX));
			sprintf(nonceBuffer, "%08X%08X", i, j);
			SHA1_Update(&current, nonceBuffer, 16);
			SHA1_Final(buffer, &current);

			// cmdDifficulty = hexdigest(buffer)
			unsigned int b, c, o;
			for (b = 0; b < 20; b++) {
				c = (b * 2);
				o = buffer[b] / 16;

				if (o < 10) {
					cmdDifficulty[c + 0] = '0' + o;
				} else {
					cmdDifficulty[c + 0] = 'a' + (o - 10);
				}

				o = buffer[b] % 16;
				if (o < 10) {
					cmdDifficulty[c + 1] = '0' + o;
				} else {
					cmdDifficulty[c + 1] = 'a' + (o - 10);
				}
			}

			if (strcmp(difficulty, cmdDifficulty) > 0) {
				printf("tree %s\n", tree);
				printf("parent %s\n", parent);
				printf("author CTF user <me@example.com> 1390419400 +0000\n");
				printf("committer CTF user <me@example.com> 1390419400 +0000\n");
				printf("\n");
				printf("%s\n", seed);
				printf("\n");
				printf("%s", nonceBuffer);
				fflush(stdout);

				return 0;
			}
		}
	}
	return 0;
}
