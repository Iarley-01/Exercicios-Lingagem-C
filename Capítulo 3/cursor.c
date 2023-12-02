#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

/*As teclas especiais, quando pressionadas, geram dois bytes: o primeiro é sempre 0 e o segundo é um número que a identifica. Por exemplo, pressionando F1 ao executar as instruções x=getch() e y=getch(), obtemos x igual a 0 e y igual a 59. Descubra os números que identificam as setas no teclado e altere o programa do exemplo 3.8 de modo que o cursor possa ser movimentado através do pressionamento delas. */

int main(int argc, char *argv[]){
	int col = 40, lin = 12;
	int key;
    while (1) {
        key = getch();
        if (key == 0) {
            key = getch();
            switch (key) {
                case 72:
                    if(lin > 1){
                        lin--;
                    }
                    break;
                case 80:
                    if(lin < 24){
                        lin++;
                    }
                    break;
                case 75:
                    if(col > 1){
                        col--
                    }
                    break;
                case 77:
                    if(col < 80){
                        col++;
                    }
                    break;
            }
        }
    }
    return 0;
}