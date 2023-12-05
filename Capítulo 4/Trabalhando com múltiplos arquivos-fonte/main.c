#include <stdio.h>
#include "macros.h"

/*Exercício 4.3. Crie um arquivo com as macros definidas no exercício 4.2 e faça um programa que use esse arquivo para testar essas macros.*/

int main(int argc, char *argv[]){
	char letra = 'A';

  printf("\nA letra %c é maiúscula? %s", letra, eh_maiuscula(letra) ? "Sim" : "Não");
  printf("\nA letra %c é minúscula? %s", letra, eh_minuscula(letra) ? "Sim" : "Não");

  printf("\nConvertendo para maiúscula: %c", maiuscula(letra));
  printf("\nConvertendo para minúscula: %c", minuscula(letra));
  return 0;
}