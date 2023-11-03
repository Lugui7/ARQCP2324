CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o where_is.o
	@echo "linking and producing final application"
	gcc $(CFLAGS) main.o where_is.o -o final
	@chmod +x final

main.o: main.c
	@echo "compiling the main file"
	gcc $(CFLAGS) -c main.c
	
where_is.o: where_is.c
	@echo "compiling the where_is file"
	gcc $(CFLAGS) -c where_is.c

clean:
	@echo "Removing object files and the final application"
	rm main.o where_is.o final
