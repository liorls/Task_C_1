main:
	gcc -o main.o main.c
	gcc -o myMaths.o myMaths.c
	./main.o
	./myMaths.o
git: 
	git status