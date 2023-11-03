#include <stdio.h>
#include "sum_even.h"

int main(){
int array[] = { 2,3,4,5,6,7};

// calcular o numero de elementos do array
// o sizeof(array) determina o numero de bytes total do array 
// o sizeof(array[0]) determina o numero de bytes para o primeiro membro do array 
// assim sendo o numero total de bytes a dividir pelo numero de bytes do primeiro membro 
// será o numero de elementos do array 
//como cada int ocupa 4 bytes, com 6 elementos seria 24 a dividir pelos bytes de apenas 1 elemento (4) 
//o resultado seria 6
 int n = sizeof(array) / sizeof(array[0]);
 //dar print aos elementos do array 
 printf("Elements in the array: ");
 for(int i=0; i<n; i++){
 printf("%d\n",array[i]);
 }
 printf("\n");
 int res = sum_even(array,n);
 //dar print à soma dos elementos pares
printf("Sum of the even elements of the array: %d\n",res);

return 0;
}
