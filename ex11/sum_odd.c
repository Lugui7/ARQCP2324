int sum_odd(int *p){
//vai ignorar o primeiro elemento que é o numero de elementos do array
//porque p é o endereço do primeiro elemento do array e entao +1 avança 1 elemento 
int* ptr = p + 1;
//n vai ser o valor apontado por p que neste caso é o primeiro elemento do array ou seja o numero de elementos
int n = *p;

int sum=0;

for(int i = 0; i<n; i++){
	//se a divisao do numero por 2 nao der resto 0, significa que é um numero impar 
	if(*ptr%2!=0){
		sum+= *ptr;
	}
	//avançar um elemento no array 
	ptr++;
}
return sum;
}
