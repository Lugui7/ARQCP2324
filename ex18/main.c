#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

#define ARRAY_SIZE 50


unsigned char array[ARRAY_SIZE];
int numSets = 0;  

void populate(unsigned char *vec, int num, unsigned char limit);
int check(unsigned char x, unsigned char y, unsigned char z);
void inc_nsets();

int main() {
    srand(time(NULL)); 

    populate(array, ARRAY_SIZE, 20);

    
    for (int i = 0; i < ARRAY_SIZE - 2; i++) {
        if (check(array[i], array[i + 1], array[i + 2])) {
            inc_nsets();
            printf("Set %d: %d %d %d\n", numSets, array[i], array[i + 1], array[i + 2]);
        }
    }

    printf("Number of sets that satisfy the condition: %d\n", numSets);

    return 0;
}
