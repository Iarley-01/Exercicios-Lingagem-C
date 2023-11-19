#include <stdlib.h>

/*Exercício: Dadas as duas notas de um aluno, informe a sua média final.  */
int main(int argc, char *argv[])
{
	float n1, n2, med;
	
	printf("\nDigite a nota 1: ");
	scanf("%f", &n1);
	
	printf("\nDigite a nota 2: ");
	scanf("%f", &n2);
	
	med = (n1 + n2)/2;
	
	printf("\nMédia final: %.2f", med);
	
	return 0;
}