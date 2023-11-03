void array_sort(int *vec,int n){
    
    int temp,swap=1;
    int *ptr1, *ptr2;
    
for (int i = 0; i < n-1 && swap; i++) {
    swap = 0;
    ptr1 = vec;
    ptr2 = vec+1;
    for (int j = 0; j < n-i-1 ; j++) {
        if(*ptr1 > *ptr2){
            
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        swap = 1;
        
                }
                
        ptr1++;
        ptr2++;
        
        }
    }
} 
