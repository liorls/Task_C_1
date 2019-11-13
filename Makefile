
VARIABLE=gcc -Wall -g
CLEAN=*.o *.a *.so mains maind

all: mymaths mymathd mains maind main.o power.o basicMath.o
power.o: power.c myMath.h
	$(VARIABLE) -c power.c
basicMath.o: basicMath.c myMath.h
	$(VARIABLE) -c basicMath.c

main.o: main.c myMath.h
	gcc -c main.c

mymaths: power.o basicMath.o
	ar -rcs libmyMath.a power.o basicMath.o

mymathd: power.o basicMath.o
	$(VARIABLE) -o libmyMath.so -shared power.o basicMath.o 

mains: main.o mymaths
	$(VARIABLE) -o mains main.o libmyMath.a
maind: main.o mymathd
	$(VARIABLE) -o maind main.o ./libmyMath.so

clean:
	rm -f $(CLEAN)

