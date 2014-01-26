all:: level0

CLANG := clang
GCC := gcc
CFLAGS := -std=c99
REMOTE_HOST := ubuntu@es_prod-indexer-0
OPTIMIZER_SETTINGS := -m64 -Ofast -flto -march=native -funroll-loops

0main.o: 0main.c
	gcc $(CFLAGS) -c $(OPTIMIZER_SETTINGS) $< -o $@

1contains.c: 1contains.py
	python $< < words.txt > $@

# Sauce
1contains_length1.c: 1contains.py
	python $< --length 1 < words.txt > $@
1contains_length2.c: 1contains.py
	python $< --length 2 < words.txt > $@
1contains_length3.c: 1contains.py
	python $< --length 3 < words.txt > $@
1contains_length4.c: 1contains.py
	python $< --length 4 < words.txt > $@
1contains_length5.c: 1contains.py
	python $< --length 5 < words.txt > $@
1contains_length6.c: 1contains.py
	python $< --length 6 < words.txt > $@
1contains_length7.c: 1contains.py
	python $< --length 7 < words.txt > $@
1contains_length8.c: 1contains.py
	python $< --length 8 < words.txt > $@
1contains_length9.c: 1contains.py
	python $< --length 9 < words.txt > $@
1contains_length10.c: 1contains.py
	python $< --length 10 < words.txt > $@
1contains_length11.c: 1contains.py
	python $< --length 11 < words.txt > $@
1contains_length12.c: 1contains.py
	python $< --length 12 < words.txt > $@
1contains_length13.c: 1contains.py
	python $< --length 13 < words.txt > $@
1contains_length14.c: 1contains.py
	python $< --length 14 < words.txt > $@
1contains_length15.c: 1contains.py
	python $< --length 15 < words.txt > $@
1contains_length16.c: 1contains.py
	python $< --length 16 < words.txt > $@
1contains_length17.c: 1contains.py
	python $< --length 17 < words.txt > $@
1contains_length18.c: 1contains.py
	python $< --length 18 < words.txt > $@
1contains_length19.c: 1contains.py
	python $< --length 19 < words.txt > $@
1contains_length20.c: 1contains.py
	python $< --length 20 < words.txt > $@
1contains_length21.c: 1contains.py
	python $< --length 21 < words.txt > $@
1contains_length22.c: 1contains.py
	python $< --length 22 < words.txt > $@
1contains_length23.c: 1contains.py
	python $< --length 23 < words.txt > $@
1contains_length24.c: 1contains.py
	python $< --length 24 < words.txt > $@

# Objects
1contains_length1.o: 1contains_length1.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length2.o: 1contains_length2.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length3.o: 1contains_length3.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length4.o: 1contains_length4.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length5.o: 1contains_length5.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length6.o: 1contains_length6.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length7.o: 1contains_length7.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length8.o: 1contains_length8.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length9.o: 1contains_length9.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length10.o: 1contains_length10.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length11.o: 1contains_length11.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length12.o: 1contains_length12.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length13.o: 1contains_length13.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length14.o: 1contains_length14.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length15.o: 1contains_length15.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length16.o: 1contains_length16.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length17.o: 1contains_length17.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length18.o: 1contains_length18.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length19.o: 1contains_length19.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length20.o: 1contains_length20.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length21.o: 1contains_length21.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length22.o: 1contains_length22.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length23.o: 1contains_length23.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@
1contains_length24.o: 1contains_length24.c
	gcc -c $(CFLAGS) $(OPTIMIZER_SETTINGS) $< -o $@

1contains.o: 1contains.c
	time $(GCC) $(CFLAGS) $(OPTIMIZER_SETTINGS) -c $< -o $@

level0: 0main.o 1contains.o 1contains_length1.o 1contains_length2.o 1contains_length3.o 1contains_length4.o 1contains_length5.o 1contains_length6.o 1contains_length7.o 1contains_length8.o 1contains_length9.o 1contains_length10.o 1contains_length11.o 1contains_length12.o 1contains_length13.o 1contains_length14.o 1contains_length15.o 1contains_length16.o 1contains_length17.o 1contains_length18.o 1contains_length19.o 1contains_length20.o 1contains_length21.o 1contains_length22.o 1contains_length23.o 1contains_length24.o
	time $(GCC) $(OPTIMIZER_SETTINGS) 0main.o 1contains.o 1contains_length*.o -o $@
	time strip $@

clean:: clean-objects clean-source

clean-objects::
	-rm -f 0main.o 1contains.o 1contains_length*.o level0

clean-source::
	-rm -f 1contains.c 1contains_length*.c

remote: remote-upload remote-build remote-download

remote-upload: 0main.c 1contains.c 1contains_length1.c 1contains_length2.c 1contains_length3.c 1contains_length4.c 1contains_length5.c 1contains_length6.c 1contains_length7.c 1contains_length8.c 1contains_length9.c 1contains_length10.c 1contains_length11.c 1contains_length12.c 1contains_length13.c 1contains_length14.c 1contains_length15.c 1contains_length16.c 1contains_length17.c 1contains_length18.c 1contains_length19.c 1contains_length20.c 1contains_length21.c 1contains_length22.c 1contains_length23.c 1contains_length24.c

	ssh $(REMOTE_HOST) rm -f 0main.c 1contains.c level0
	scp 0main.c $(REMOTE_HOST):.
	scp -C 1contains.c $(REMOTE_HOST):.
	scp -C 1contains_length*.c $(REMOTE_HOST):.
	scp Makefile $(REMOTE_HOST):.

remote-build: 0main.c 1contains.c
	ssh $(REMOTE_HOST) make -j 16 clean-objects all

remote-download:
	scp -C $(REMOTE_HOST):level0 .
