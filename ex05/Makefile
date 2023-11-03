#Makefile ex05

ex05: sum_even.o main.o
			gcc sum_even.o main.o -o ex05
			
sum_even.o: sum_even.c
			gcc -c sum_even.c -o sum_even.o 
			
main.o: main.c 
			gcc -c main.c -o main.o
			
clean: 
			rm -f *.o ex05
			
run: ex05 
			./ex05
