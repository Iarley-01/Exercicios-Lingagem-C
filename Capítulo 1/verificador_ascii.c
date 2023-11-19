#include <stdlib.h>

/*Exercicio: Dado um caracter, informe o seu código ASCII em octal, decimal e hexadecimal */
int main(int argc, char *argv[])
{
	char letra;
	
	printf("\nDigite uma letra: ");
	scanf("%c", &letra);
	
	printf("\nHexadecimal: %x", letra);
	printf("\nOctal: %o", letra);
	printf("\nDecimal: %d", letra);
	
	return 0;
}