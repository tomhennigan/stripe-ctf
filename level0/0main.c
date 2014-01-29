#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define I_BUFSIZE (size_t)(4096 * 4)
#define O_BUFSIZE (size_t)(4096 * 4)
#define W_BUFSIZE (size_t)(32)

extern unsigned int contains(char * word, int len);

int main(void)
{
    char * output = malloc(O_BUFSIZE);
    short output_i = 0;
    setvbuf(stdout, NULL, _IONBF, 0);
    // char output[O_BUFSIZE];
    // setvbuf(stdout, output, _IOFBF, sizeof(output));

    char * input = malloc(I_BUFSIZE);
    // char input[I_BUFSIZE];
    // setvbuf(stdin, input, _IOFBF, sizeof(input));

    char * wordbuf = malloc(40);
    // char wordbuf[W_BUFSIZE];
    unsigned int wordbuf_i = 0;

    unsigned int n, i;
    char c;
    uint64_t * i_wp;

    n = fread(input, 1, I_BUFSIZE, stdin);
    for (i=0; i<n; i++) {
        c = input[i];

        if (c == '\0') {
            break;
        }

        wordbuf[wordbuf_i] = c;

        if (c == ' ' || c == '\n') {
            if (wordbuf_i != 0) {
                i_wp = (uint64_t *)&wordbuf[wordbuf_i];
                *i_wp = 0x0000000000000000;

                if (contains(wordbuf, wordbuf_i) == 0) {
                    output[output_i++] = '<';
                    memcpy(output + output_i, wordbuf, wordbuf_i);
                    output_i += wordbuf_i;
                    output[output_i++] = '>';

                    // Print the word.
                    // write(1, "<", 1);
                    // write(1, wordbuf, wordbuf_i);
                    // write(1, ">", 1);
                    // putc('<', stdout);
                    // fwrite(wordbuf, wordbuf_i, 1, stdout);
                    // putc('>', stdout);
                } else {
                    // Print the word.
                    memcpy(output + output_i, wordbuf, wordbuf_i);
                    output_i += wordbuf_i;

                    // fwrite(wordbuf, wordbuf_i, 1, stdout);
                    // write(1, wordbuf, wordbuf_i);
                }

                wordbuf_i = 0;
            }

            output[output_i++] = c;
            // putc(c, stdout);
            // write(1, &c, 1);
        } else {
            wordbuf_i++;
        }
    }

    // fwrite(output, output_i, 1, stdout);
    // fflush(stdout);
    write(1, output, output_i);
    return 0;
}
