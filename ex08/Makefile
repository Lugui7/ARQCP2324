CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o
	@echo "linking and producing final application"
	gcc $(CFLAGS) main.o -o final
	@chmod +x final

main.o: main.c
	@echo "compiling the main file"
	gcc $(CFLAGS) -c main.c
	
clean:
	@echo "Removing object files and the final application"
	rm main.o final
