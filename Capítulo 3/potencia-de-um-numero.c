#include <stdio.h>
#include <math.h>

/*Exercicio: Dados um número real x e um natural n, exiba a potência xⁿ. */
int main(int argc, char *argv[]){
	float x = 0; //base
	int n = 0; //expoente
	
	printf("\nDigite um número para ser a base: ");
	scanf("%f", &x);
	
	printf("\nDigite um número para o expoente: ");
	scanf("%d", &n);
	
	printf("\nExpressão: %.1f^ %d", x, n);
	
	printf("\nResultado: %.2f", pow(x, n));
}