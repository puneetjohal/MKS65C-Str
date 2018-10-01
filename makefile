all: mystr.o
	gcc mystr.o

run:
	./a.out

mystr.o: mystr.c functions.h
	gcc -c mystr.c 
