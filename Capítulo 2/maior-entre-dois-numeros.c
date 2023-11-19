#include <stdio.h>

/*Exercicio: Dados dois números distintos, informe qual dele é o maior. */
int main(int argc, char *argv[]){
	int n1, n2;
	int maior;
	
	printf("\nDigite um número: ");
	scanf("%d", &n1);
	
	printf("\nDigite outro número: ");
	scanf("%d", &n2);
	
	if(n1 > n2){
	    printf("\nMaior número: %d", n1);
	}
	else if(n2 > n1) {
	    printf("\nMaior número: %d", n2);
	}
	else {
	    printf("\nOs números são iguais");
	}
	
	return 0;
}