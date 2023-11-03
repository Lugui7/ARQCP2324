#include <stdio.h>
#include "function.h"
#include <stddef.h>
 
int main(){

    char string[] = "This is a test.";
    char c = 'a';
    
    char *result = where_is(string, c);

 if (result != NULL) {
        printf("Found character '%c' at position: %p\n", c, (void*)result);
    } else {
        printf("Character '%c' not found in the string.\n", c);
    }
    return 0;
}
