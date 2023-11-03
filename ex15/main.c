#include <stdio.h>
#include "trim_string.h"

int main(){
char str[] = "      the      numBEr    must be    saved   ";
printf("This is your initial string: %s\n", str);

trim_string(str);
printf("This is your final string: %s\n",str);

return 0;
}
