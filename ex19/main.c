#include <stdio.h>
#include "swap.h"

int main(){
	short vec1[] = {1,2,5,6,7};
	short vec2[] = {3,13,2,7,81};
	int size = sizeof(vec1)/sizeof(vec1[0]);
	swap(vec1,vec2,size);
	
	printf("Both Arrays swapped: \n");
	printf("vec1: \n");
	
	for(int i=0; i<size; i++){
	printf("%d\n", vec1[i]);
	}
	printf("vec2: \n");
	for(int i=0; i<size;i++){
	printf("%d\n", vec2[i]);
	}
	
	return 0;
}
