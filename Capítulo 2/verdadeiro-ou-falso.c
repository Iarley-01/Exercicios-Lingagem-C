#include <stdio.h>
#include <stdbool.h>

/*Exercicio: Codifique uma instrução para exibir valores lógicos como true e false. Para o valor 0 deve aparecer false e para qualquer outro, true.*/
int main(int argc, char *argv[]){
	int valor;
	
	printf("\nDigite um valor: ");
	scanf("%d", &valor);
	
	if(valor == 0){
	    printf("\ntrue");
	}
	else {
	    printf("\nfalse");
	}
	return 0;
}