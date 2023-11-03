#include <stdio.h>
#include "sort_without_reps.h"

int main(){
	short src[] = {6,4,3,4,7,2};
	//calcular o tamanho do array dividindo o tamanho do array pelo tamanho do primeiro elemento do array
	int n = sizeof(src)/sizeof(src[0]);
	short dest[n];
	
	int result= sort_without_reps(src,n,dest);
	printf("Number of unique elements in the array: %d\n",result);
	printf("Sorted array with only the unique elements: ");
	for(int i =0; i<result; i++){
	printf("%d\n",dest[i]);
	}
	return 0;
}
