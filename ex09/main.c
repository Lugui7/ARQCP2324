#include <stdio.h>
#include "sum_integer_bytes.h"

int main(){
	unsigned int d = 0xAABBCCDD;
	int result = sum_integer_bytes(&d);
	
	printf("The Sum of the integer bytes is: %d\n",result);
	return 0;
}
