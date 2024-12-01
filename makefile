all: arcfour example
example: example.c arcfour.so
	gcc  arcfour.so example.c -O2 -Wall -o example
arcfour: rc4.o
	gcc rc4.o -O2 -Wall -shared -fPIC -ldl -D_GNU_SOURCE -o arcfour.so
rc4.o: rc4.c
	gcc -c -O2 -Wall rc4.c
clean:
	rm -rf *.so *.o example
