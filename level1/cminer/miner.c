#include <stdio.h>
#include <openssl/sha.h>
#include <string.h>
#include <stdint.h>

void printsha1(unsigned char * buffer)
{
	unsigned int i;
	for (i = 0; i < SHA_DIGEST_LENGTH; i++) {
		printf("%02x", buffer[i]);
	}
	printf("\n");
}

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

	char cmdDifficulty[41];

	SHA_CTX current, initial;
	unsigned char buffer[SHA_DIGEST_LENGTH] = {0};
	char nonceBuffer[17] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	SHA1_Init(&initial);
	SHA1_Update(&initial, "commit ", 7);
	char lenBuf[10];
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

			sprintf(cmdDifficulty, "%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
				buffer[0], buffer[1], buffer[2], buffer[3], buffer[4], buffer[5], buffer[6], buffer[7], buffer[8], buffer[9],
				buffer[10], buffer[11], buffer[12], buffer[13], buffer[14], buffer[15], buffer[16], buffer[17], buffer[18], buffer[19]);

			// fprintf(stderr, "%s\n", nonceBuffer);

			if (strcmp(difficulty, cmdDifficulty) > 0) {
				// puts(nonceBuffer);
				// printsha1(buffer);
				// break;

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
