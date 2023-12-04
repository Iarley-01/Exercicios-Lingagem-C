#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>

/*Exercicio 3.13: As teclas especiais, quando pressionadas, geram dois bytes: o primeiro é sempre 0 e o segundo é um número que a identifica. Por exemplo, pressionando F1 ao executar as instruções x=getch() e y=getch(), obtemos x igual a 0 e y igual a 59. Descubra os números que identificam as setas no teclado e altere o programa do exemplo 3.8 de modo que o cursor possa ser movimentado através do pressionamento delas. */

int main(int argc, char *argv[]){
	int col = 40, lin = 12;
	int key;
	int ativa_rastro = 0;
	int ativa_borracha = 0;
	int cor_escolhida = 1;
	
    while (1) {
        key = getch();
        if (key == 0) {
            key = getch();
            
            switch (key) {
                case 60:
                    ativa_rastro = !ativa_rastro;
                    break;
                case 61:
                    ativa_borracha = !ativa_borracha;
                    break;
                case 62:
                    printf("\nEscolha a cor (1-15): ");
                        scanf("%d", &cor_escolhida);
                        if (cor_escolhida < 1 || cor_escolhida > 15) {
                            printf("Cor inválida! Usando cor padrão.\n");
                            cor_escolhida = 1;  // Cor padrão
                        }
                case 72:
                    if(lin > 1 && !ativa_borracha){
                        lin--;
                    }
                    break;
                case 80:
                    if(lin < 24 && !ativa_borracha){
                        lin++;
                    }
                    break;
                case 75:
                    if(col > 1 && !ativa_borracha){
                        col--;
                    }
                    break;
                case 77:
                    if(col < 80 && !ativa_borracha){
                        col++;
                    }
                    break;
            }
        }
        break;
        
        if (ativa_rastro && !ativa_borracha) {
            // Lógica para desenhar aqui com a cor cor_selecionada
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cor_escolhida);
            printf("X");
        } else if (ativa_borracha) {
            // Lógica para apagar (usando cor preta)
            printf(" ");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
        }
    }
    return 0;
}