#include <stdio.h>

int main(){

int x = 5;
int* ptr_x = &x;
float y = *ptr_x + 3;

//values printed
printf("The value of x: %d\n",x);
printf("The value of y: %f\n", y);

//addresses printed 
printf("The address of x (in Hexadecimal): %p\n", &x);
printf("The address of y (in Hexadecimal): %p\n", &y);
printf("The address of ptr_x (in Hexadecimal) : %p\n", &ptr_x);


//value of ptr_x printed
printf("The value of ptr_x : %p\n", ptr_x);

//value pointed printed
printf("The value pointed by ptr_x: %d\n", *ptr_x);

// Então o apontador guarda o endereço de uma variavel por isso o seu valor é o endereço da variavel neste caso x, 
// E o valor apontado pelo apontador sera o valor desse endereço ou seja o valor de x 
// se quiser o endereço tenho de meter "&"
// se quiser o apontado por tenho de meter "*"

int vec[] = {10, 20, 30, 40};
int* ptr_vec = vec;
int z = *ptr_vec;
int h = *(ptr_vec + 3);

// values printed
printf ("The value of z: %d\n", z);
printf ("The value of h: %d\n", h);

//addresses printed
printf ("The address of vec (in Hexadecimal): %p\n", &vec);
printf ("The address of ptr_vec (in Hexadecimal): %p\n", &ptr_vec);

//values printed
printf ("The value of ptr_vec: %p\n", ptr_vec);
printf ("The value of vec: %p\n", vec);

//value pointe printed
printf ("The value pointed by ptr_vec: %d\n", *ptr_vec);

//o valor do vetor é o endereço do primeiro elemento do vetor e como o apontador aponta para o primeiro valor do vetor, o valor do apontador é o endereço do primeiro elemento do vetor

int i;
for(i = 0; i < 4; i++){
printf("1: %p,%d\t", &vec[i],vec[i]);
}
printf("\n");
for(ptr_vec = vec; ptr_vec < vec + 4; ptr_vec++){
printf("2: %p,%d\t", ptr_vec,*ptr_vec);
}
printf("\n");
for(ptr_vec = vec + 3; ptr_vec >= vec; ptr_vec--){
printf("3: %p,%d\t", ptr_vec,*ptr_vec);
}
// no 1 vai percorrer o vetor e escrever o valor de cada elemento e respetivo endereço, 
// no 2 o apontador vai ficar com o valor do primeiro endereço do vetor e a cada ptr_vec++ vai avançar um elemento do vetor
// no 3 o apontador começa no ultimo elemento do vetor e vai diminuindo ate chegar ao primeiro
// ptr_vec++ avança um elemento no vetor
// ptr_vec-- volta um elemento para tras no vetor

printf("\n");
ptr_vec = vec;
printf("4: %p,%d\n", ptr_vec,*ptr_vec); //o valor de ptr_vec ou seja o endereço do primeiro elemento do vetor, e o valor apontado ou seja 10 
int a = *ptr_vec++;
printf("5: %p,%d,%d\n", ptr_vec,*ptr_vec, a);// sem os () *prt_vec++ é o apontado por prt_vec ou seja o segundo elemento do vetor
ptr_vec = vec;
a = (*ptr_vec)++;
printf("6: %p,%d,%d\n", ptr_vec,*ptr_vec, a);// pegou no apontado pelo apontador 10 e somou ++ ou seja ficou 11
ptr_vec = vec;
a = *++ptr_vec;
printf("7: %p,%d,%d\n", ptr_vec,*ptr_vec, a);
ptr_vec = vec;
a = ++*ptr_vec;
printf("8: %p,%d,%d\n", ptr_vec,*ptr_vec, a);
printf("\n");
for(ptr_vec = vec; ptr_vec < vec + 4; ptr_vec++){
printf("9: %p,%d\t", ptr_vec,*ptr_vec);
}
printf("\n");
unsigned int d = 0xAABBCCDD;
printf("10: %p,%x\t", &d,d); //endereço e valor em hexadecimal
printf("\n");
unsigned char* ptr_d = (unsigned char*)&d;
unsigned char* p;
for(p = ptr_d; p < ptr_d + sizeof(unsigned int); p++){  //p vai percorrer os bytes desde o 1º até ao ultimo
printf("11: %p,%x\t", p,(unsigned char)*p); //endereço e valor do byte atual em hexadecimal 
}


return 0;
}
