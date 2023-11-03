# Makefile ex11

ex11: sum_odd.o main.o
		gcc sum_odd.o main.o -o ex11
		
sum_odd.o: sum_odd.c
		gcc -c sum_odd.c -o sum_odd.o
		
main.o: main.c
		gcc -c main.c -o main.o
		
clean:
		rm -f *.o ex11
		
run: ex11
		./ex11
