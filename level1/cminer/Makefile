GCC := gcc
CFLAGS := -Wno-deprecated -arch x86_64 -Ofast -march=native -funroll-loops

OPENSSL_VERSION := 1.0.0

all:: miner

# OpenSSL.

openssl-$(OPENSSL_VERSION).tar.gz:
	exit 1
	curl -O http://www.openssl.org/source/openssl-$(OPENSSL_VERSION).tar.gz
	touch $@

openssl-$(OPENSSL_VERSION): openssl-$(OPENSSL_VERSION).tar.gz
	tar -xzvf openssl-$(OPENSSL_VERSION).tar.gz
	touch $@
	cd openssl-$(OPENSSL_VERSION) ; ./Configure darwin64-x86_64-cc no-shared no-threads && make

libcrypto.a: openssl-$(OPENSSL_VERSION)
	cp $</$@ $@
	touch $@

clean::
	-rm -rf openssl-$(OPENSSL_VERSION)/
	-rm -f openssl-$(OPENSSL_VERSION).tar.gz

miner: miner.c libcrypto.a
	$(GCC) $(CFLAGS) $< libcrypto.a -o $@
	strip $@

test:: miner
	./miner `git write-tree` `git rev-parse HEAD` `cat ../difficulty.txt` ; echo

clean::
	rm -f miner
