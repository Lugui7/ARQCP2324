void capitalize(char *str){
		//percorrer a string enquanto o caracter nao for nulo 
while(*str != '\0'){
		//verificar se o valor ASCII do caracter é maior ou igual a 'a' ou seja 97 e menor ou igual que 'z' ou seja 122
		//aspas simples -> caracteres individuais, aspas duplas -> strings 
	if(*str >= 'a' && *str <= 'z'){
		//para converter uma letra minuscula a maiuscula é necessário subtrair 32 ao ser valor ASCII
		*str-=32;
}
		//passar para o próximo caracter 
		//é str++ e nao *str++ poir ao fazer *str++ primeiro acessa o endereço de str e depois avança o caracter 
		//e entao estaria sempre a acessar o primeiro caracter, por isso str++ vai avançando sempre
	str++;
}
}
