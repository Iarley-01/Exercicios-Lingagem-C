#include <stdio.h>
#include <conio.h>

/*Exercicio: Numa faculdade, os alunos com média pelo menos 7,0 são aprovados, aqueles com média inferior a 3,0 são reprovados e os demais ficam de recuperação. Dadas as duas notas de um aluno, informe sua situação. Use as cores azul, vermelho e amarelo para as mensagens aprovado, reprovado e recuperação, respectivamente.*/

int main(int argc, char *argv[]){
	float nota1 = 0, nota2 = 0;
	float media = 0;
	
	printf("\nDigite a nota 1: ");
	scanf("%f", &nota1);
	
	printf("\nDigite a nota 2: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	
	printf("\nMédia: %.2f", media);
	
	if(media >= 7){
	    textcolor(BLUE);
	    cprintf("\nAprovado");
	}
	else if(media <= 3){
	    textcolor(YELLOW);
	    cprintf("\nRecuperação");
	}
	else{
	    textcolor(RED);
	    cprintf("\nReprovado");
	}
}