void trim_string(char *str){
	
char *ptr1 = str;
char *ptr2 = str;
//uma variavel para saber se estou numa sequencia de espaços 
int spaces= 0;

while(*ptr1 == ' ' || *ptr1 == '\t'){
ptr1++;
}
//percorrer a string
while(*ptr1){
	//se o caracter for um espaço ou uma mudança de paragrafo
	if(*ptr1 == ' ' || *ptr1 == '\t'){
		//se a variavel spaces for 0 quer dizer que apenas existe um espaço entao 
		//vou adicionar apenas um espaço à string final que neste caso é apontada por *ptr2
		if(spaces==0){
			*ptr2= ' ';
			ptr2++;
			spaces=1;
		}
		//se nao for um espaço entao apenas se copia de ptr1 para ptr2 
	}else{
	*ptr2 = *ptr1;
	ptr2++;
	spaces=0;
	}
	ptr1++;
	
}
//para remover os espaços no fim da frase, pois caso spaces seja 1, é porque ainda existe uma sequencia de espaços
if (spaces == 1 && ptr2 > str) {
    ptr2--;
}
//declarar o fim da string
*ptr2 = '\0'; 
}
