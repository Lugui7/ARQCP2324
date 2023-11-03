#include "function.h"
#include <stdio.h>

int main() {
    int vec[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(vec) / sizeof(vec[0]);
    
     printf("\nOriginal array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vec[i]);
    }

    array_sort(vec, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vec[i]);
    }

    return 0;
}
