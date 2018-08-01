all: compile run

compile:
	gcc -std=c99 -g3 flame.c test.c -o flame -lm -lX11
run:
	./flame