# Makefile ex03

ex03: capitalize.o main.o
			gcc capitalize.o main.o -o ex03
			
capitalize.o: capitalize.c
			gcc -c capitalize.c -o capitalize.o
			
main.o: main.c
			gcc -c main.c -o main.o 

clean:
			rm -f *.o ex03
			
run: ex03
			./ex03
