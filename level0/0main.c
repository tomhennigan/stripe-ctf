#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
// #include <stdbool.h>

extern unsigned int contains(char * word, int len);

int main(void)
{
    #define I_BUFSIZE (unsigned int)(4096 * 4)
    #define O_BUFSIZE (unsigned int)(4096 * 2)

    // char * output = malloc(O_BUFSIZE);
    // short output_i = 0;
    char output[O_BUFSIZE];
    setvbuf(stdout, output, _IOFBF, sizeof(output));

    // char input[I_BUFSIZE];
    // setvbuf(stdin, input, _IOFBF, sizeof(input));

    // char * wordbuf = malloc(64);
    char wordbuf[40];
    unsigned int wordbuf_i = 0;

    // char * checkbuf = malloc(64);
    char checkbuf[40];
    unsigned int checkbuf_i = 0;

    char * buf = malloc(I_BUFSIZE);
    // char buf[I_BUFSIZE];

    unsigned int n, i;
    char c;
    // while ((n = read(0, buf, I_BUFSIZE)) > 0) {
    n = fread(buf, 1, I_BUFSIZE, stdin);
    for (i=0; i<n; i++) {
        c = buf[i];

        if (c == '\0') {
            break;
        }

        wordbuf[wordbuf_i] = c;
        if (c >= 'A' && c <= 'Z') {
            checkbuf[checkbuf_i] = c | (char)0x20;
        } else {
            checkbuf[checkbuf_i] = c;
        }

        if (c == ' ' || c == '\n') {
            if (wordbuf_i != 0) {
                wordbuf[wordbuf_i] = '\0';
                checkbuf[checkbuf_i] = '\0';

                // fprintf(stderr, "%s\n", checkbuf);

                // If comparing uint32_t.
                checkbuf[checkbuf_i + 1] = '\0';
                checkbuf[checkbuf_i + 2] = '\0';
                checkbuf[checkbuf_i + 3] = '\0';

                // If comparing uint64_t.
                checkbuf[checkbuf_i + 4] = '\0';
                checkbuf[checkbuf_i + 5] = '\0';
                checkbuf[checkbuf_i + 6] = '\0';
                checkbuf[checkbuf_i + 7] = '\0';


                if (contains(checkbuf, checkbuf_i) == 0) {
                    // output[output_i++] = '<';
                    // memcpy(output + output_i, wordbuf, wordbuf_i);
                    // output_i += wordbuf_i;
                    // output[output_i++] = '>';

                    // Print the word.
                    // write(1, "<", 1);
                    // write(1, wordbuf, wordbuf_i);
                    // write(1, ">", 1);
                    putc('<', stdout);
                    fwrite(wordbuf, wordbuf_i, 1, stdout);
                    putc('>', stdout);
                } else {
                    // Print the word.
                    // memcpy(output + output_i, wordbuf, wordbuf_i);
                    // output_i += wordbuf_i;

                    fwrite(wordbuf, wordbuf_i, 1, stdout);
                    // write(1, wordbuf, wordbuf_i);
                }

                wordbuf_i = 0;
                checkbuf_i = 0;
            }

            // output[output_i++] = c;
            putc(c, stdout);
            // write(1, &c, 1);
        } else {
            wordbuf_i++;
            checkbuf_i++;
        }
    }
    // }

    // fwrite(output, output_i, 1, stdout);
    fflush(stdout);
    return 0;
}
