#include <stdio.h>
#include <stdlib.h>
#include "random.h"

int int main(int argc, char const *argv[])
{
	int m = 0, n = 0, k = 0;
	do{
	printf("Por favor, digite entre espacos o numero de linhas, colunas e o teto dos numeros respectivamente: ");
	printf("\n");
	scanf("%d %d %d", &m, &n, &k);
    }while(m < 1 || n < 1 || m > 100 || n > 100 || k < 0);
	int matrizUm [m][n];
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			matrizUm[i][j] = randInt(1, k);
		}
	}

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%5d \n", matrizUm[i][j]);
		}
		printf("\n");
	}
	return 0;
}