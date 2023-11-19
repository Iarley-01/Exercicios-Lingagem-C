#include <stdio.h>
#include <stdlib.h>

/*Exercício: Codifique uma instrução para exibir valores lógicos como true e false. Para o valor 0 deve aparecer false e para qualquer outro, true.*/
int main(int argc, char *argv[]){
	int ano;
	
	printf("\nInforme o ano: ");
	scanf("%d", &ano);
	
	if((ano % 4 == 0) && (ano % 100 != 0)){
	    printf("\nO ano digitado é bissexto");
	}
	else {
	    printf("\nO ano digitado não é bissexto");
	}
	
	return 0;
}