#include <stdio.h>
#define valorReajuste 5/100

/*Exercicio: Uma empresa determinou um reajuste salarial de 5% a todos os seus funcionários. Além disto, concedeu um abono de R$ 100,00 para aqueles que recebem até R$ 750,00. Dado o valor do salário de um funcionário, informar para quanto ele será reajustado.*/


int main(int argc, char *argv[]){
	float salario = 0, salarioComReajuste = 0, salarioComAbono;
	const float salarioMinimo = 1320;
	int mesesTrabalhados = 0, valorDoAbono = 0;
	
	printf("\nDigite o valor do salário do funcionário: ");
	scanf("%f", &salario);
	
	salarioComReajuste = salario + (salario * valorReajuste);
	
	printf("\nValor do salário com reajuste: %f",  salarioComReajuste);
	
	if(salario <= 750){
	    printf("\nDigite o quantidade de meses trabalhados no ano: ");
	    scanf("%d", &mesesTrabalhados);
	    
	    valorDoAbono = mesesTrabalhados * 100;        salarioComAbono = salarioComReajuste + valorDoAbono;
	    
	    printf("\nValor do salário com o Abono: %f", salarioComAbono);
	}
	else {
	    printf("\nSalário: %f", salarioComReajuste);
	}
	
	return 0;
}