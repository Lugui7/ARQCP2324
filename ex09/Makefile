#Makefile ex09

ex09: sum_integer_bytes.o main.o
		gcc sum_integer_bytes.o main.o -o ex09
		
sum_integer_bytes.o: sum_integer_bytes.c
		gcc -c sum_integer_bytes.c -o sum_integer_bytes.o

main.o: main.c
		gcc -c main.c -o main.o

clean:
		rm -f *.o ex09
		
run: ex09
		./ex09
