void frequencies(float *grades, int n, int *freq){
	
for(int i =0; i<n ;i++){
	//vai descobrir a parte inteira da frequencia 
	int integerParts = (int)*(grades+i);
	//vai adicionar +1 ao valor apontado no array freq na posição da parte inteira 
	*(freq+integerParts)+=1;
}

}
