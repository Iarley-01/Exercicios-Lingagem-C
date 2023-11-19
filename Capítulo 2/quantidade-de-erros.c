#include <stdlib.h>

/*Exercicio: Seja e uma variável contendo o número de erros detectados num certo processo. Codifique uma instrução capaz de exibir saídas como:  

    1 erro detectado
    5 erros detectados
*/
int main(int argc, char *argv[]){
	int e = 0;
	
	printf("\nDigite o número de erros: ");
	scanf("%d", &e);
	
	if(e == 1){
	    printf("\n%d erro detectado", e);
	}
	else if(e > 1){
	   printf("\n%d erros detectados", e);
    }
    else{
        printf("\nSem erros");
    }
    
    return 0;
}