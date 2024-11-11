all: arcfour example
example: example.c
	gcc example.c -O2 -Wall -c example.o
arcfour: rc4.o
	gcc rc4.o -O2 -Wall -shared -o arcfour.so
rc4.o: rc4.c
	gcc -c -O2 -Wall rc4.c
clean:
	rm -f *.so *.o