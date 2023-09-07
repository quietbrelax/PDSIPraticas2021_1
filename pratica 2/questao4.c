//1su21#9
#include <stdio.h>

void main(){

	int cpf, cpfaux, resto, peso, soma, dezena, unidade;
	printf("Digite seu CPF sem o digito verificador\n");
	scanf("%d", &cpf);
	cpfaux = cpf;
	soma = 0;
	peso = 2;
	resto = cpfaux % 10;
	soma += resto * peso;
	peso++;
	cpfaux /= 10;
	resto = cpfaux % 10;
	soma += resto * peso;
	peso++;
	cpfaux /= 10;
	resto = cpfaux % 10;
	soma += resto * peso;
	peso++;
	cpfaux /= 10;
	resto = cpfaux % 10;
	soma += resto * peso;
	peso++;
	cpfaux /= 10;
	resto = cpfaux % 10;
	soma += resto * peso;
	peso++;
	cpfaux /= 10;
	resto = cpfaux % 10;
	soma += resto * peso;
	peso++;
	cpfaux /= 10;
	resto = cpfaux % 10;
	soma += resto * peso;
	peso++;
	cpfaux /= 10;
	resto = cpfaux % 10;
	soma += resto * peso;
	peso++;
	cpfaux /= 10;
	resto = cpfaux % 10;
	soma += resto * peso;
	if(soma % 11 == 0 || soma % 11 == 1){
		dezena = 0;
	}
	else{
		dezena = 11 - (soma % 11 );
	}
	cpfaux = cpf;
	soma = 2 * dezena;
	peso = 3;
	resto = cpfaux % 10;
	soma += resto * peso;
	peso++;
	cpfaux /= 10; 
	resto = cpfaux % 10;
	soma += resto * peso;
	peso++;
	cpfaux /= 10;
	resto = cpfaux % 10;
	soma += resto * peso;
	peso++;
	cpfaux /= 10;
	resto = cpfaux % 10;
	soma += resto * peso;
	peso++;
	cpfaux /= 10;
	resto = cpfaux % 10;
	soma += resto * peso;
	peso++;
	cpfaux /= 10;
	resto = cpfaux % 10;
	soma += resto * peso;
	peso++;
	cpfaux /= 10;
	resto = cpfaux % 10;
	soma += resto * peso;
	peso++;
	cpfaux /= 10;
	resto = cpfaux % 10;
	soma += resto * peso;
	peso++;
	cpfaux /= 10;
	resto = cpfaux % 10;
	soma += resto * peso;
	if(soma % 11 == 0 || soma % 11 == 1){
		unidade = 0;
	}
	else{
		unidade = 11 - (soma % 11 );
	}
	printf("Seu CPF: %d-%d%d\n", cpf, dezena, unidade);

}