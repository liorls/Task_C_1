mymaths: power.o basicMaths.o
	ar -rcs libmyMath.a basicMaths.c power.c

mymathd: power.c basicMath.c
	gcc -o libmyMath.so power.c basicMath.c

all: mymaths mymathd
	