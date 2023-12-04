#include <stdio.h>
#include <conio.h>
#include <dos.h>

/*Exercício 3.17. Usando a tabela de notas musicais abaixo, codifique um programa para simular um piano de sete teclas.*/

int main(int argc, char *argv[]){
	char tecla;
	
	while(1){
	    tecla = getch();
	    
	    switch (tecla) {
	        case 'A': 
	            sound(262);
	            delay(500);
	            nosound();
	            break;
	        case 'S': 
	            sound(294);
	            delay(500);
	            nosound();
	            break;
	        case 'D': 
	            sound(330);
	            delay(500);
	            nosound();
	            break;
	        case 'J': 
	            sound(392);
	            delay(500);
	            nosound();
	            break;
	        case 'K': 
	            sound(440);
	            delay(500);
	            nosound();
	            break;
	        case 'L': 
	            sound(494);
	            delay(500);
	            nosound();
	            break;
	        case 'Q': 
	            return 0;
	            break;
	        default:
	            printf("\nTecla inválida");
	            break;
	    }
	}
	
	return 0;
}