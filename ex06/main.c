#include <stdio.h>
#include "capitalize.h"

int main() {
    char meep[] = "Hello, World!";
    char *str = meep;

    capitalize2(str);

    printf("Capitalized string: %s\n", str);

    return 0;
}
