#include <stdio.h>
#include "function.h" 

int main() {
    char str[] = " the numBEr must be saved";
    int wordCount; // Declare wordCount variable
    count_words(str, &wordCount); // Pass a pointer to wordCount
    printf("%d\n", wordCount); // Print the word count
    return 0;
}
