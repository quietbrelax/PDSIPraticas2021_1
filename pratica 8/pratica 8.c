#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define tamMax 100

int random(int n){
	return rand() % n;
}

int randInt(int min, int max){
	return min + random(max - min + 1);
}

/*void imprimeMatriz(int M[][tamMax], int m, int n){
	for (int i = 0; i < m; ++i)
	{
		printf("\n");
		for (int j = 0; j < n; ++j)
		{
			printf("%5d ", M[i][j]);
		}
		printf("\n");
	}
}*/
void transladaZeros(int M[][tamMax], int m, int n){
int aux = 0;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (M[i][j] == 0)
			{
				for (int x = i - 1; x <= 0; --x)
				{
					aux = M[x][j];
					if (aux == 0)
						break;
					else{
						M[x][j] = M[x + 1][j];
						M[x + 1][j] = aux;
					}
				}	
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int m = 0, n = 0, k = 0;
	do{
	printf("Por favor, digite entre espacos o numero de linhas, colunas e o teto dos numeros respectivamente: ");
	printf("\n");
	scanf("%d %d %d", &m, &n, &k);
	if(m < 1 || n < 1 || m > 100 || n > 100){
		printf("Dimensao invalida\n");
	}
    }while(m < 1 || n < 1 || m > 100 || n > 100 || k < 0);
	int matrizUm [m][n];
	int matrizAux[m][n];
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
			matrizAux[i][j] = matrizUm[i][j];
		}
	}
	//do{
    for (int i = 0; i < m; ++i)
	{
		for (int j = 2; j < n; ++j)
		{
			if(matrizUm[i][j] == matrizUm[i][j - 1] && matrizUm[i][j] == matrizUm[i][j - 2]){
				matrizAux[i][j - 2] = 0;
				matrizAux[i][j - 1] = 0;
				matrizAux[i][j] = 0;
			}
		}
	}
    for (int j = 0; j < m; ++j)
	{
		for (int i = 2; i < n; ++i)
		{
			if(matrizUm[i][j] == matrizUm[i - 1][j] && matrizUm[i][j] == matrizUm[i - 2][j]){
				matrizAux[i - 2][j] = 0;
				matrizAux[i - 1][j] = 0;
				matrizAux[i][j] = 0;
			}
		}
	}
	//}while(matrizAux[m][n - 1] == matrizAux[m][n] && matrizAux[m][n] == matrizAux[m][n - 2]||matrizAux[m - 1][n] == matrizAux[m][n] && matrizAux[m][n] == matrizAux[m - 2][n])
    int contador = 0;
    for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(matrizAux[i][j] == 0){
				contador++;
			}
		}
	}

	printf("Matriz Inicial: \n");
	for (int i = 0; i < m; ++i)
	{
		printf("\n");
		for (int j = 0; j < n; ++j)
		{
			printf("%5d ", matrizUm[i][j]);
		}
		printf("\n");
	}
	printf("Matriz Final: \n");
	for (int i = 0; i < m; ++i)
	{
		printf("\n");
		for (int j = 0; j < n; ++j)
		{
			printf("%5d ", matrizAux[i][j]);
		}
		printf("\n");
	}

	printf("A quantidade de numeros 0 eh: %d\n", contador);
	return 0;
}