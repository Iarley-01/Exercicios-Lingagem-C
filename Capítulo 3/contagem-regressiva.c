#include <stdio.h>

/*Exercicio: Dado um valor n, exiba uma contagem regressiva*/
int main(int argc, char *argv[]){
    
    int n = 0;
    printf("\nDigite onde deseja começar a contagem regressiva: ");
    scanf("%d", &n);
    
    if (n != 0){
        for(int i = n; i >= 0; i--){
            printf("\n%d", i);
        }
    }
    
    else {
        printf("\nDigite um número maior que 0");
    }
}