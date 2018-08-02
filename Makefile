all: compile run

compile:
	gcc -std=c99 -g3 core/flame.c test/test.c -o flame -lm -lX11
run:
	./flame