#include <stdio.h>
#include <math.h>

/*Exercicio: Dados os coeficientes (a≠0, b e c) de uma equação do 2o grau, calcule e informe suas raízes reais, usando a fórmula de Báskara.*/
int main(int argc, char *argv[])
{
	int a = 0, b = 0, c = 0;
	float delta = 0, x1 = 0, x2 = 0;
	
	printf("\nDigite o valor do coeficiente a: ");
	scanf("%d", &a);
	printf("\nDigite o valor do coeficiente b: ");
	scanf("%d", &b);
	printf("\nDigite o valor do coeficiente c: ");
	scanf("%d", &c);
	
	if((a == 0) || (b == 0) || (c == 0)){
	    printf("\nEquação Inválida");
	}
	else{
	    printf("\n%dx^2 - %dx - %d = 0", a, b, c);
	    delta = (b * b) - 4 * a * c;
	    printf("\nValor do Delta: %.1f", delta);
	    
	    if(delta > 0){
	        printf("\nA equação terá duas raízes distintas");
	        x1 = (-b + sqrt(delta)) / 2*a;
	        x2 = (-b - sqrt(delta)) / 2*a;
	        
	        printf("\nValor da primeira raíz: %.1f", x1);
	        printf("\nValor da segunda raíz: %.1f", x2);            
	    } 
	    else if(delta < 0){
	        printf("\nA equação não terá raízes reais");
	    }
	    else{
	        printf("\nA equação tem apenas 1 raíz");            x1 = (-b + sqrt(delta)) / 2*a;
	        printf("\nValor da raíz: %.1f", x1);
	    }
	}
}