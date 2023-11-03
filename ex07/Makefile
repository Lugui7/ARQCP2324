# Makefile ex07

ex07: get_array_statistics.o main.o
		gcc get_array_statistics.o main.o -o ex07
		
get_array_statistics.o: get_array_statistics.c
		gcc -c get_array_statistics.c -o get_array_statistics.o

main.o: main.c
		gcc -c main.c -o main.o

clean:
		rm -f *.o ex07
		
run: ex07
		./ex07
