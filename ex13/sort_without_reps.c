int sort_without_reps(short* src, int n, short* dest){

if (n<=0){
	return 0;
}
//copiar o array para o array de destino
//dest +i é para descobrir o endereço do valor no array e depois *(dest + i) é o valor desse mesmo endereço
// entao atribui o valor desse endereço ao valor do endereço em src
for (int i =0; i<n; i++){
	*(dest +i) = *(src +i);
}
//ordenar por ordem crescente com o metodo bubble sort
// dest + j é o endereço do valor no array 
//*(dest + j) é o valor apontado por dest + j
for (int i = 0; i< n-1; i++){
	for (int j=0; j<n-i-1; j++){
		if (*(dest + j)>*(dest + j +1)){
			//trocar os valores apontados por dest + j e dest + j +1
			short temp = *(dest + j);
            *(dest + j) = *(dest + j + 1);
            *(dest + j + 1) = temp;
		}
	}
}
// em qualquer array existe pelo menos 1 valor unico que é o primeiro numero
int unique= 1;

for (int i =1; i<n; i++){
	//vai comparar o primeiro valor apontado com o valor apontado anterior
if(*(dest+i) != *(dest+i-1)){
	//se forem diferentes vai se copiar o elemento para a posição do array
	//vai construir o array dest apenas com os elementos unicosg
	*(dest + unique) = *(dest + i);
	unique++;
}
}
//numero de elementos unicos
return unique;

}
