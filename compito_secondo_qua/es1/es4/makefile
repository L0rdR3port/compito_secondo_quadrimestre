all:main

main: main.o distanza.o
	gcc -o main main.o distanza.o

main.o: main.c distanza.h
	gcc -c -o main.o main.c

distanza.o: distanza.c distanza.h
	gcc -c -o distanza.o distanza.c