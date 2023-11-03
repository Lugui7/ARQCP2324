void get_array_statistics(int* vec, int n, int* min,int* max, float* avg){

//caso o array esteja vazio
if(n<=0){
	return;
}
//*min -> acessar o valor apontado por min
//tornar esse valor o primeiro elemento do array (no minimo e no maximo)
*min = vec[0];
*max = vec[0];

*avg=0.0;

// criar um apontador que aponta para o valor do primeiro elemento do array
int* test = vec;
int sum=0;

for (int i=0;i<n; i++){
// se o elemento do array for menor que o minimo, entao o minimo passa a ser esse elemento
if(*test < *min){
*min = *test;
}
//se o elemento do array for maior que o maximo, entao o maximo passa a ser esse elemento 
if(*test > *max){
*max = *test;
}
//a soma é a soma dos elementos do array
sum += *test;
//passa para o proximo elemento do array, se fosse *test++ ia alterar o valor apontado por test e nao é isso que se quer
test++;
}

*avg = (float)sum/n;
}
