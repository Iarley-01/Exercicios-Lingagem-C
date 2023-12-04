#include <stdio.h>

/*Exercício 3.15. Um comerciante precisa informatizar o caixa de sua loja. Para isso ele precisa de um programa que leia uma série de valores correspondendo aos preços das mercadorias compradas por um cliente (o valor zero finaliza a entrada), calcule o valor total, subtraia deste valor o desconto devido (vide tabela ao lado) e, finalmente, mostre o valor a ser pago pelo cliente. Codifique esse programa. */
int main(int argc, char *argv[]){
	float valor_compra, desconto, valor_total = 0, valor_final = 0;
	
	do {
	    printf("\nDigite o valor da compra: ");
	    scanf("%f", &valor_compra);
	    
	    if(valor_compra != 0){
	        valor_total += valor_compra;
	    }
	} while (valor_compra != 0);
	
	if(valor_total <= 50){
	    desconto = valor_total * 0.05;
	} else if(valor_total > 50 && valor_total <= 100){
	   desconto = valor_total * 0.10;
	   } else if(valor_total > 100 && valor_total <= 200){
	         desconto = valor_total * 0.15;
	     } else {
	           desconto = valor_total * 0.20;
	       }
	
	valor_final = valor_total - desconto;
	printf("\nValor a ser pago: R$ %.2f", valor_final);
	return 0;
}