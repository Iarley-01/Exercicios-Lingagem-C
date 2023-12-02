#include <stdio.h>

int main(int argc, char *argv[]){
	unsigned int n, soma = 0, i = 0;
	
	printf("\nDigite um número inteiro: ");
	scanf("%d", &n);
	
	if(n < 1){
	    printf("\nInválido");
	    return 1;
	}
	
	while (soma < n) {
	    soma += i;
	    i++;
	}
	
	if (soma == n) {
	    printf("\nO número %u é triangular!", n);
	} else {
	    printf("\nO número %u não é triangular!");
	}
	
	return 0;
}