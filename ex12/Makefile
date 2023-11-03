CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o array_sort.o
	@echo "linking and producing final application"
	gcc $(CFLAGS) main.o array_sort.o -o final
	@chmod +x final

main.o: main.c
	@echo "compiling the main file"
	gcc $(CFLAGS) -c main.c
	
array_sort.o: array_sort.c
	@echo "compiling the array_Sort file"
	gcc $(CFLAGS) -c array_sort.c

clean:
	@echo "Removing object files and the final application"
	rm main.o array_sort.o final
