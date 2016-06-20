brainfuck: brainfuck.o vector.o
	gcc brainfuck.o vector.o -o brainfuck

brainfuck.o: brainfuck.c vector.h
	gcc -c brainfuck.c

vector.o: vector.c vector.h
	gcc -c vector.c
