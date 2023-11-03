int sum_integer_bytes(unsigned int* p){

int sum=0;
//vai ser criado um apontador que aponta para o mesmo endereço que o apontador p mas é um apontador char
// e isto é feito para que seja possível analisar cada byte individualmente
unsigned char* bytePointer = (unsigned char*)p;
// um ciclo for que vai percorrer cada byte do numero inteiro
//como um inteiro ocupa 4 bytes o ciclo vai ser feito até ultrapassar esse valor
for (int i = 0; i< sizeof(unsigned int); i++){
	sum += bytePointer[i];
}
return sum;
}
