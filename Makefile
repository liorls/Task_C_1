# mymaths: power.o basicMaths.o
# 	ar -rcs libmyMath.a basicMaths.c power.c

# mymathd: power.c basicMath.c
# 	gcc -o libmyMath.so power.c basicMath.c

# all: mymaths mymathd

# mains:
# 	gcc -o 
	

	# -- MakeFile -- 

all: mymaths mymathd mains maind main.o power.o basicMath.o

mymaths: power.o basicMath.o
	ar -rcs libmyMath.a power.o basicMath.o
mymathd: power.o basicMath.o
	gcc -Wall -g -shared power.o basicMath.o -o libmyMath.so
mains: main.o mymaths
	gcc -Wall -g -o mains main.o 
	libmyMath.a
maind: main.o mymathd
	gcc -Wall -g -o maind main.o ./libmyMath.so
main.o: main.c myMath.h
	gcc -c main.c
power.o: power.c myMath.h
	gcc -Wall -g -c power.c
basicMath.o: basicMath.c myMath.h
	gcc -Wall -g -c basicMath.c

clean:
	rm -f *.o *.a *.so mains maind
git: 
	git add --all
	git commit -m "Add"
	git push