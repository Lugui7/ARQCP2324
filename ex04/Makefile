CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o copy_vec.o
	@echo "linking and producing final application"
	gcc $(CFLAGS) main.o copy_vec.o print_vec.o -o final
	@chmod +x final

main.o: main.c
	@echo "compiling the main file"
	gcc $(CFLAGS) -c main.c
	
copy_vec.o: copy_vec.c
	@echo "compiling the copy_vec file"
	gcc $(CFLAGS) -c copy_vec.c
	
print_vec.o: print_vec.c
	@echo "compiling the print_vec file"
	gcc $(CFLAGS) -c print_vec.c.c

clean:
	@echo "Removing object files and the final application"
	rm main.o copy_vec.o print_vec.o final
