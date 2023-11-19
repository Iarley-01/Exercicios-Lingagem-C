#include <stdio.h>

/*Exercicio: Dados um número natural n, exiba seu fatorial n!.*/

int main(int argc, char *argv[]){
	int n = 0; //número que terá o fatorial calculado
	int fatorial = 1;
	
	printf("\nDigite um número inteiro: ");
	scanf("%d", &n);
	
	if (n < 0){
	    printf("\nNúmero invalido");
	    return 1;
	}
	
	for(int i = 1; i <= n; i++){
	    fatorial = fatorial * i;
	}
	
	printf("\nFatorial de %d!: %d", n, fatorial);
	
	return 0;
}