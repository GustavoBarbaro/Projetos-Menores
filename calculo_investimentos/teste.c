#include <stdio.h>
#include <stdlib.h>

int main (){

	int i,j;

	float aporte_inicial, aux, resp, mensal;

	printf("Aporte inicial : \n");
	scanf ("%f", &aporte_inicial);

	printf("Aportes mensais: \n");
	scanf("%f", &mensal);


	for (j = 1; j <= 19; j++){ //para 19 anos
		for (i = 1; i<=12; i++){ //PARA 1 ANO
			aux = aporte_inicial;
			resp = (aux * 0.008) + aux + mensal;
			aporte_inicial = resp;

			//printf("Valor no mês[%d] = %f\n", i, aporte_inicial);
		}
	}

	printf("Aporte final : %f\n", aporte_inicial);






	return 0;
}