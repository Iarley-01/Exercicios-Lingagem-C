#include <stdio.h>

/*Exercicio: A série de Fibonacci é 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Os dois primeiros termos são iguais a 1 e, a partir do terceiro, o termo é dado pela soma dos dois termos anteriores. Dado um número n≥3, exiba o n-ésimo termo da série de Fibonacci.  */
int main(int argc, char *argv[]){
	int numeroAtual = 1, ultimoNumero = 1, penultimoNumero = 1, n;
	
	printf("\nDigite o tamanho da série de fibonacci:  ");
	scanf("%d", &n);
	
	if(n < 0){
	    printf("\nNúmero Inválido");
	}
	else if(n == 1){
	    return 1;
	}
	for(int i = 0; i < n - 2; i++){
	    numeroAtual = ultimoNumero + penultimoNumero;
	    penultimoNumero = ultimoNumero;
	    ultimoNumero = numeroAtual;
	}
	
	printf("\nO %d-esimo termo é: %d", n, numeroAtual);
	
	return 0;
}