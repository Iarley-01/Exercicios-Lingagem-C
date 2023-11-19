#include <stdio.h>

/*Exercicio: Exiba uma tabela de conversão de polegadas em centímetros, variando as polegadas de 0 a 10, meio em meio

Dica: 1'' ≈ 2,54 cm*/
int main(int argc, char *argv[]){
	float cm;
	for (float polegadas = 0; polegadas <= 10; polegadas += 0.5){
	    printf("%.2f\t\t%.2f\n", polegadas, polegadas * 2.54);
	}
}