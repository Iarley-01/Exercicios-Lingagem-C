#include <stdlib.h>

/*Exercício: Dados uma distância e o total de litros de combustível gasto por um automóvel para percorrê-la, informe o consumo médio. */
int main(int argc, char *argv[])
{
	int distancia, litros;
	float consumo_medio;
	
	printf("\nQual a distancia (em KM): ");
	scanf("%d", &distancia);
	
	printf("\nQuantidade de litros gastos: ");
	scanf("%d", &litros);
	
	consumo_medio = distancia/litros;
	
	printf("\nO consumo médio de gasolina foi de %.2f", consumo_medio);
	
	return 0;
}