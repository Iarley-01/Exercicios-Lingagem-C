#include <stdio.h>

/*Exercicio: Numa certa agência bancária, as contas são identificadas por números de até seis dígitos seguidos de um dígito verificador, calculado conforme exemplificado a seguir. Dado um número de conta n, exiba o número de conta completo correspondente. */

int main(int argc, char *argv[]){
	unsigned n, d, originalN;
	int soma = 0, digito;
	
	printf("\nDigite o número da conta: ");
	scanf("%u", &n);
	
	originalN = n;
	
	printf("\nOs dígitos do número são: ");
	
	while (n != 0){
	    d = n % 10;
	    n /= 10;
	    soma = soma + d;
	    printf("%u ", d);
	}
	printf("Soma: %d", soma);
	digito = soma % 10;
	
	printf("\nNúmero da conta completo: 00%u-%d", originalN, digito);
	
	return 0;
}