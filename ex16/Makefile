CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o format_string.o
	@echo "linking and producing final application"
	gcc $(CFLAGS) main.o format_string.o -o final
	@chmod +x final

main.o: main.c
	@echo "compiling the main file"
	gcc $(CFLAGS) -c main.c
	
format_string.o: format_string.c
	@echo "compiling the format_string file"
	gcc $(CFLAGS) -c format_string.c

clean:
	@echo "Removing object files and the final application"
	rm main.o format_string.o final
