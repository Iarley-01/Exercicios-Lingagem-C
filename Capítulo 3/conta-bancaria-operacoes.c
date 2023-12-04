#include <stdio.h>

/*Exercício 3.16. Faça um programa que calcule o saldo de uma conta bancária tendo como entrada o saldo inicial e uma série de operações de crédito e/ou débito finalizada com o valor zero. O programa deve apresentar como saída o total de créditos, o total de débitos, a C.P.M.F. paga (0,35% do total de débitos) e o saldo final.*/
int main(int argc, char *argv[]){
	float saldo, credito_total = 0, debito_total = 0, cpmf, saldo_final;
	int operacao;
	
	printf("\nDigite o saldo inicial da conta: ");
	scanf("%f", &saldo);
	
	do {
	    printf("\nEscolha a operação (digite 0 para encerrar): ");
	    scanf("%d", &operacao);
	    
	    if(operacao > 1){
	        credito_total += operacao;
	    } else if (operacao < 1){
	        debito_total += operacao;
	    }
	} while(operacao != 0);
	
	cpmf = 0.35 * (-debito_total);
	
	saldo_final = saldo + credito_total + debito_total + cpmf;
	
	printf("\nResumo das Operações");
	printf("\nTotal de Créditos: %.2f", credito_total);
	printf("\nTotal de Débitos: %.2f", debito_total);
	printf("\nValor da CPMF pago: %.2f", cpmf);
	printf("\nSaldo Final da conta: %.2f", saldo_final);
	
	return 0;
}