#include <stdio.h>
#include <openssl/sha.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>

pthread_mutex_t found_mutex = PTHREAD_MUTEX_INITIALIZER;
unsigned int found = 0;

const char * tree;
const char * parent;
const char * difficulty;

void * miner_thread_main(void * seed);

int main(int argc, const char *argv[])
{
	if (argc != 4) {
		fprintf(stderr, "usage: ./miner <tree> <parent> <difficulty>\n");
		return 1;
	}

	tree = argv[1];        // "9553d91ca2fcef5a9ee7178e38cdfa9605af20ef"
	parent = argv[2];      // "000000f90e262c8df1af70e3a73a63cd71200b89"
	difficulty = argv[3];  // "000001"

	if (strlen(tree) != 40) {
		fprintf(stderr, "error: tree argument should be an sha1 hash\n");
		return 1;
	}

	if (strlen(parent) != 40) {
		fprintf(stderr, "error: parent argument should be an sha1 hash\n");
		return 1;
	}

	unsigned int n_threads = 8;
	pthread_t ** threads = malloc(sizeof(pthread_t *) * n_threads);
	unsigned int n;
	for (n = 0; n < n_threads; n++) {
		char * seed = malloc(sizeof(char) * 20);
		sprintf(seed, "Thread %d", n);
		threads[n] = malloc(sizeof(pthread_t));
		pthread_create(threads[n], NULL, miner_thread_main, (void *)seed);
	}

	for (n = 0; n < n_threads; n++) {
		pthread_join(*threads[n], NULL);
	}

	return 0;
}

inline void hexdigest(const unsigned char * bin, unsigned char * asc, size_t len)
{
	unsigned int b, c, o;
	for (b = 0; b < len; b++) {
		c = (b * 2);
		o = bin[b] / 16;

		if (o < 10) {
			asc[c + 0] = '0' + o;
		} else {
			asc[c + 0] = 'a' + (o - 10);
		}

		o = bin[b] % 16;
		if (o < 10) {
			asc[c + 1] = '0' + o;
		} else {
			asc[c + 1] = 'a' + (o - 10);
		}
	}

	asc[len] = '\0';
}

void * miner_thread_main(void * seed)
{
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

	unsigned int i, j;
	for (i = 0; i < 4294967295; i++) {
		for (j = 0; j < 4294967295; j++) {
			if (found != 0) {
				return NULL;
			}

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
				pthread_mutex_lock(&found_mutex);
				if (found == 0) {
					found = 1;

					printf("tree %s\n", tree);
					printf("parent %s\n", parent);
					printf("author CTF user <me@example.com> 1390419400 +0000\n");
					printf("committer CTF user <me@example.com> 1390419400 +0000\n");
					printf("\n");
					printf("%s\n", seed);
					printf("\n");
					printf("%s", nonceBuffer);
					fflush(stdout);
				}
				pthread_mutex_unlock(&found_mutex);

				return NULL;
			}
		}
	}

	return NULL;
}
