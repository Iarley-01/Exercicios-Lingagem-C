#include <stdio.h>

/*Exercicio: Dada um temperatura em graus Fahrenheit, informe o valor correspondente em graus Celsius.*/
int main(int argc, char *argv[]){
	float f, c;
	printf("\nDigite o valor da temperatura em Graus Fahrenheit (°F): ");
	scanf("%f", &f);
	
	c = (f - 32) / 1.8;
	
	printf("Valor da temperatura em Celsius (°C): %.2f", c);
	
	return 0;
}