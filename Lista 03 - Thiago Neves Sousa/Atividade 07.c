#include <stdio.h>

int main(){
	
	char variavel1;
	short variavel2;
	int variavel3;
	float variavel4;
	long variavel5;
	double variavel6;
	
	printf("Tipo char: \t%zu bytes \n", sizeof(variavel1));
	
	printf("Tipo short: \t%zu bytes \n", sizeof(variavel2));
	
	printf("Tipo int: \t%zu bytes \n", sizeof(variavel3));
	
	printf("Tipo float: \t%zu bytes \n", sizeof(variavel4));
	
	printf("Tipo long: \t%zu bytes \n", sizeof(variavel5));
	
	printf("Tipo double: \t%zu bytes", sizeof(variavel6));
	
	return 0;
}

/* 
J� havia feito o codigo direto igual solicitado na quest�o 08. Por�m voltei e 
fiz da maneira mais "completo" (em outras palavras demorado) usando duas variaveis 
para n�o ser a mesma resposta da quest�o 08.
*/
