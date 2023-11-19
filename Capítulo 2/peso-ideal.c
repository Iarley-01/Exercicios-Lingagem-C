#include <stdio.h>

/*Exercicio: Dados a altura e o sexo de uma pessoa, determine seu peso ideal de acordo com as fórmulas a seguir: 

• para homens o peso ideal é 72.7 * altura − 58 
• para mulheres o peso ideal é 62.1 * altura − 44.7*/
int main(int argc, char *argv[]){
	char sexo;
	float altura, pesoIdeal;
	
	printf("\nDigite sua altura (em metros): ");
	scanf("%f", &altura);
	
	printf("\nDigite seu sexo (m - Masculino, f -feminino): ");
	scanf("%s", &sexo);
	
	switch(sexo){
	    case 'm':
	        pesoIdeal = 72.7 * altura - 58;
	        printf("\nPeso Ideal: %.2f", pesoIdeal);
	        break;
	    case 'f':
	        pesoIdeal = 62.1 * altura - 44.7;
	        printf("\nPeso Ideal: %.2f", pesoIdeal);
	        break;
	}
}