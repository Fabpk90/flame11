all: compile run

compile:
	gcc -std=c99 -g3 core/flame.c utils/vector2i.c core/shapes/point.c test/test.c -o flameTest -lm -lX11
run:
	./flame