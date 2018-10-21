all: sieve.o main.o
	gcc sieve.o main.o

run:
	./a.out

sieve.o: sieve.c sieve.h
	gcc -c sieve.c sieve.h

main.o: main.c sieve.h
	gcc -c main.c sieve.h
