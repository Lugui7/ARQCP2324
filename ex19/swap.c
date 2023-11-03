void swap(short* vec1, short* vec2, int size){

if (size<=0){
return 0;
}
short test[size];
short* ptr= test;
//copiar o vec1 para o array de teste
for (int i=0; i<size ; i++){
	*(ptr+i)=*(vec1 +i);
}
//copiar o vec2 para vec1 
for (int i=0; i<size;i++){
	*(vec1+i) = *(vec2+i);
}
//copiar o array de teste que contem a informação do array1 para o array2
for(int i=0;i<size;i++){
*(vec2+i) = *(ptr+i);
}

}
