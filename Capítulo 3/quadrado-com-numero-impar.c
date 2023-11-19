#include <stdio.h>

/*Exercicio: O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos. Por exemplo, 12=1, 22=1+3, 32=1+3+5, 42=1+3+5+7, etc. Dado um número n, calcule seu quadrado usando a soma de ímpares ao invés de produto*/
int main(int argc, char *argv[]){
	int n, quadrado = 0;
	
	printf("\nDigite um número Inteiro: ");
	scanf("%d", &n);
	
	if(n < 0) {
	    printf("\nNúmero Inválido");
	}
	
	for (int i = 1; i <= (n * 2 - 1); i+=2){
	    quadrado += i;
	}
	
	printf("\nQuadrado de %d: %d", n, quadrado);
	return 0;
}