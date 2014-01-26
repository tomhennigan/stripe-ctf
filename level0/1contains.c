#include <stdint.h>
unsigned int nope(uint64_t * wp) { return 0; }
typedef unsigned int (*contains_fn)(uint64_t *);
unsigned int contains1(uint64_t *);
unsigned int contains2(uint64_t *);
unsigned int contains3(uint64_t *);
unsigned int contains4(uint64_t *);
unsigned int contains5(uint64_t *);
unsigned int contains6(uint64_t *);
unsigned int contains7(uint64_t *);
unsigned int contains8(uint64_t *);
unsigned int contains9(uint64_t *);
unsigned int contains10(uint64_t *);
unsigned int contains11(uint64_t *);
unsigned int contains12(uint64_t *);
unsigned int contains13(uint64_t *);
unsigned int contains14(uint64_t *);
unsigned int contains15(uint64_t *);
unsigned int contains16(uint64_t *);
unsigned int contains17(uint64_t *);
unsigned int contains18(uint64_t *);
unsigned int contains19(uint64_t *);
unsigned int contains20(uint64_t *);
unsigned int contains21(uint64_t *);
unsigned int contains22(uint64_t *);
unsigned int contains23(uint64_t *);
unsigned int contains24(uint64_t *);
unsigned int contains(char * word, int len){
	uint64_t * wp = (uint64_t *)word;
	contains_fn jumptable[] = {nope, contains1, contains2, contains3, contains4, contains5, contains6, contains7, contains8, contains9, contains10, contains11, contains12, contains13, contains14, contains15, contains16, contains17, contains18, contains19, contains20, contains21, contains22, contains23, contains24, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope, nope};
	return jumptable[len](wp);
}
