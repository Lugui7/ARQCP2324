#include <stdio.h>
#include "function.h"

void print_vec(int *vec1, int size, int *vec2){
    int i;
    
	   for (i = 0; i < size; ++i) {
        printf("%d ", vec1[i]);
    }
    printf("\n");

    for (i = 0; i < size; ++i) {
        printf("%d ", vec2[i]);
    }
    printf("\n");
}
