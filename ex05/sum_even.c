int sum_even(int *vec, int n){
		int sum =0;
		// pointer para o inicio do array 
		int *ptr1 = vec; 
		
		for(int i=0; i < n; i++){
		//verificar se o valor apontado por ptr1 é um numero par ou seja a divisao por 2 dá resto 0 
		if (*ptr1 % 2 ==0){
		//soma o valor ja existente da soma com o valor do numero par
		sum += *ptr1;
		}
		//deslocar o apontador para o proximo elemento do array
		ptr1++;
		}
	return sum;
}
