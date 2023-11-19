#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Exercicio: Dadas as medidas dos catetos de um triângulo retângulo, informe a medida da hipotenusa.*/
int main(int argc, char *argv[]){
	int cat1, cat2, h, c;
	
	printf("\nInforme a medida do cateto 1:  ");
	scanf("%d", &cat1);
	
	printf("\nInforme a medida do cateto 2: ");
	scanf("%d", &cat2);
	
	c = (pow(cat1, 2)) + (pow(cat2, 2));
	
	h = sqrt(c);
	
	printf("\nValor da hipotenusa: %d", h);
	
	return 0;
}