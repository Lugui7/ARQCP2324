CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o capitalize.o
	@echo "linking and producing final application"
	gcc $(CFLAGS) main.o capitalize.o -o final
	@chmod +x final

main.o: main.c
	@echo "compiling the main file"
	gcc $(CFLAGS) -c main.c
	
capitalize.o: capitalize.c
	@echo "compiling the copy_vec file"
	gcc $(CFLAGS) -c capitalize.c

clean:
	@echo "Removing object files and the final application"
	rm main.o capitalize.o final
