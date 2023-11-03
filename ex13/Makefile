# Makefile ex13

ex13: sort_without_reps.o main.o
		gcc sort_without_reps.o main.o -o ex13
		
sort_without_reps.o: sort_without_reps.c
		gcc -c sort_without_reps.c -o sort_without_reps.o
		
main.o: main.c
		gcc -c main.c -o main.o
clean: 
		rm -f *.o ex13
		
run: ex13
		./ex13
