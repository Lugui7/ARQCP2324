CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o populate.o inc_nsets.o check.o
	@echo "linking and producing final application"
	gcc $(CFLAGS) main.o populate.o inc_nsets.o check.o -o final
	@chmod +x final

main.o: main.c
	@echo "compiling the main file"
	gcc $(CFLAGS) -c main.c
	
populate.o: populate.c
	@echo "compiling the populate file"
	gcc $(CFLAGS) -c populate.c
	
inc_nsets.o: inc_nsets.c
	@echo "compiling the inc_nsets file"
	gcc $(CFLAGS) -c inc_nsets.c
	
check.o: check.c
	@echo "compiling the check file"
	gcc $(CFLAGS) -c check.c
			
clean:
	@echo "Removing object files and the final application"
	rm main.o populate.o inc_nsets.o check.o final

