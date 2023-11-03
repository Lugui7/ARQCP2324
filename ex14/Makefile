CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o count_words.o
	@echo "linking and producing final application"
	gcc $(CFLAGS) main.o count_words.o -o final
	@chmod +x final

main.o: main.c
	@echo "compiling the main file"
	gcc $(CFLAGS) -c main.c
	
count_words.o: count_words.c
	@echo "compiling the count_words file"
	gcc $(CFLAGS) -c count_words.c

clean:
	@echo "Removing object files and the final application"
	rm main.o count_words.o final
