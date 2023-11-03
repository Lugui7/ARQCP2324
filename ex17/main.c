#include <stdio.h>
#include "frequencies.h"

int main(){
	float grades[]= {8.23, 12.25, 16.45, 12.45, 10.05, 6.45, 14.45, 0.0,12.67, 16.23, 18.75};
	int n = sizeof(grades)/sizeof(grades[0]);
	//21 pois as notas variam de 0 até 20 ou seja 21 notas possiveis
	int freq[21]={0};
	
	frequencies(grades,n,freq);
	printf("The array grades with the content: \n");
	for (int i =0; i<n ; i++){
	printf("%.2f\n",grades[i]);
	}
	printf("Should produce a freq array with: \n");
	int nfreq = sizeof(freq)/sizeof(freq[0]);
	for(int i=0; i<nfreq; i++){
	printf("%d\n", freq[i]);
	}
	return 0;
}
