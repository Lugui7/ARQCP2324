#include <stdio.h>
#include "function.h"
int main() {
    char str[] = " the numBEr must be saved ";
    format_string(str);
    printf("%s\n", str);

    return 0;
}
