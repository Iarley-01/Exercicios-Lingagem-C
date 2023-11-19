#include <stdio.h>
#include <stdlib.h>

/* Exercicio: Dado um número real qualquer, informe seu valor absoluto.*/
int main(int argc, char *argv[]){
	float num;
	
	printf("\nDigite um número real: ");
	scanf("%f", &num);
	
	printf("\nO valor absoluto do número digitado é:  %d", abs(num));
	
	return 0;
}