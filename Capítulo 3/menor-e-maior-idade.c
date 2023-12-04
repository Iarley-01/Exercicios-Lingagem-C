#include <stdio.h>


/*Exercício 3.14. Dada uma série de números positivos (finalizada com um valor nulo) que representam as idades das pessoas que moram num certo bairro, determine a idade da pessoa mais nova e a da pessoa mais velha. */
int main(int argc, char *argv[]){
	int idades;
	int maior_idade = 0;
	int menor_idade = 0;
	
	do {
	    printf("\nDigite uma idade: ");
	    scanf("%d", &idades);
	    
	    if(idades == 0){
	        break;
	    }
	    
	    if(menor_idade == 0 || idades < menor_idade){
	        menor_idade = idades;
	    }
	    
	    if(idades > maior_idade){
	        maior_idade = idades;
	    }
	} while (1);
	
	printf("\nMaior idade: %d", maior_idade);
	printf("\nMenor idade: %d", menor_idade);
	return 0;
}