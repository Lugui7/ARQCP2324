#include <stdio.h>
#include "sum_odd.h"
int main(){

int array[]= {5, 2,3,4,5,6};
int result = sum_odd(array);

printf("The sum of the odd elements of the array is: %d\n", result);

	return 0;
}
