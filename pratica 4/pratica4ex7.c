#include <stdio.h>
#include <ctype.h>
#include "pratica4.h"

int main(int argc, char const *argv[])
{
	char sexo;
	float altura, pesoAtual, pesoIdeal;
	do{
		printf("\nDigite seu sexo(M ou F): ");
		scanf(" %c", &sexo);
		sexo = toupper(sexo);
		if(sexo != 'M' && sexo != 'F'){
			printf("Valor invalido.");
		}
	}while(sexo != 'M' && sexo != 'F');
	return 0;
}