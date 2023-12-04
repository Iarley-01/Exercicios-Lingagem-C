#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Exercício 3.18. A função rand(), definida em stdlib.h, gera números aleatórios no intervalo de 0 a 32767. Crie um programa para gerar sons com freqüências e durações aleatórias, ininterruptamente, até que o usuário pressione uma tecla. Garanta que a duração de uma nota não seja demasiadamente longa, restringindo o intervalo dos números gerados.*/

int main(int argc, char *argv[]){
	int frequencia;
	long pausa;
	clock_t antes, depois;
	int duracao;
	do {
	    frequencia = rand() % 1000 + 300;
	    duracao = rand() % 500 + 100;
	    
	    
	    printf("\a");
	    
	    pausa = duracao * (CLOCKS_PER_SEC / 1000);
	    antes = depois = clock();
	    while((antes - depois) < pausa){
	        antes = clock();
	    }
	} while(!kbhit());
	return 0;
}