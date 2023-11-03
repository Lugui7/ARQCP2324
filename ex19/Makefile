#Makefile ex19

ex19: swap.o main.o
		gcc swap.o main.o -o ex19

swap.o: swap.c
		gcc -c swap.c -o swap.o
		
main.o: main.c
		gcc -c main.c -o main.o

clean:
		rm -f .*o ex19
		
run: ex19
		./ex19
