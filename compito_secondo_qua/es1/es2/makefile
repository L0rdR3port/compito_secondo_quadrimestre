all:main

main: main.o inverti.o
	gcc -o main main.o inverti.o

main.o: main.c inverti.h
	gcc -c -o main.o main.c

inverti.o: inverti.c inverti.h
	gcc -c -o inverti.o inverti.c