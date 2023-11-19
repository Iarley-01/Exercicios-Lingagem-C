#include <stdio.h>

/*Exercicio: Faça um programa que permita o usuário fazer divisões usando os dois pontos (:) (Crie um caso sem um comando break correspondente)*/
int main(int argc, char *argv[])
{
	char operador;
	double num1, num2, resultado;
	
	printf("\nDigite a expressão no formato 'numero 1 : numero 2' : ");
	scanf("%lf %c %lf", &num1, &operador, &num2);
	
	switch(operador){
	    case ':': 
	        if(num2 != 0){
	            resultado = num1 / num2;
	            printf("\nResultado da divisão: %.2f", resultado);
	        } else {
	            printf("\nErro, divisão por zero");
	        }
	     default: 
	        printf("\nOperador Inválido");
	}
	return 0;
}