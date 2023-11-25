#include <stdio.h>
#include <locale.h>

/*Exercicio: Dados dois números naturais m e n, exiba um retângulo com m caracteres de altura e n caracteres de largura.*/
int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	int m, n;
	
	printf("\nDigite a altura do retângulo: ");
	scanf("%d", &m);
	
	printf("\nDigite a largura do retângulo: ");
	scanf("%d", &n);
	
	for(int i = 0; i < m; i++){
	    for(int j = 0; j < n; j++){
	        printf("%c%c", 219, 219);
	    }
	    printf("\n");
	}
	
	return 0;
}