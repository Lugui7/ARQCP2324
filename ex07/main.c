#include <stdio.h>
#include "get_array_statistics.h"

int main(){
	
int array[]= {2, 4, 6, 8, 10, 12, 14};
int min;
int max;
float average;

//obter o numero de elementos do array
int n = sizeof(array)/sizeof(array[0]);	

get_array_statistics(array,n,&min,&max,&average);
	
printf("Maximum: %d\n",max);
printf("Minimum: %d\n",min);
printf("Average: %.2f\n",average);	
	
return 0;
}
