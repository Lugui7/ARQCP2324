#include <stdio.h>

int main(){

double x = 12.12;
int y = 10;
char z = 'g';

double *ptr_x;
int *ptr_y;
char *ptr_z;

ptr_x = &x;
ptr_y = &y;
ptr_z = &z;


printf("Adresses: x: %p, y: %p, z: %p\n", &x,&y,&z);
printf("          ptr_x: %p, ptr_y: %p, ptr_z: %p\n",&ptr_x,&ptr_y,&ptr_z);
printf("\n");
printf("values:  x: %f, y: %d, z: %c\n", x,y,z);
printf("         ptr_x: %p, ptr_y: %p, ptr_z: %p\n",ptr_x,ptr_y ,ptr_z);
printf("\n");
printf("sizeof:  x: %zu bytes, y: %zu bytes, z: %zu bytes\n", sizeof(x),sizeof(y),sizeof(z));
printf("         ptr_x: %zu, ptr_y: %zu, ptr_z: %zu\n", sizeof(ptr_x),sizeof(ptr_y),sizeof(ptr_z));


return 0;
}
