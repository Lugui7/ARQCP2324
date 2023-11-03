#include <stdio.h>
#include  "capitalize.h"

int main(){
	//Um array de caracteres 
	char stringReplace[] = "Hi, World";
	// %s -> para strings
	printf("Original String: %s\n", stringReplace);
	//dentro da função capitalize, todos os caracteres minusculos vao ser alterados para maisculos
	// vai receber o apontador referente ao primeiro caracter do array de caracteres
	// e como foi recebido o endereço do primeiro caracter por meio do apontador é possivel alterar toda a string
	//e isso irá afetar o stringReplace diretamente pois está a ser feito por meio de apontadores
	capitalize(stringReplace);
	
	printf("String Capitalized: %s\n", stringReplace);
	return 0;
}
