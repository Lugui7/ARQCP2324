#include "function.h"

int main(){
	int vec1[]={1,2,3,4,5,6,7,8,9,10};
	int vec2[]={11,12,13,14,15,16,17,18,19,20};
	int n = 3;
	int size = 10;
	int* ptr_vec1 = vec1;
	int* ptr_vec2 = vec2;
	
	copy_vec(vec1,n,vec2);
	
	print_vec(vec1, size, vec2);
		return 0;
	}	
