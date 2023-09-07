/*O valor de  (número de Euler) pode ser aproximado pelo somatório:

e = 1 + 1/1! + 1/2! + 1/3! + 1/4! + 1/5! ...

Implemente um programa para aproximar o valor de e. 
Seu programa deve aumentar a precisão da aproximação calculando iterativamente (isto é, num laço) os termos do somatório acima. 
Seu programa deve parar a aproximação quando o i-ésimo termo (1/i!) for menor do que 10^-6.

Implemente esse programa fazendo uma função separada para calcular o fatorial de i.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*#define delta pow(10, -6)

double fatorial(int i){
	double fatorial = 1;
	//i* i-1 * i-2... * i-i+1
	while(i > 0){
		fatorial = fatorial * i;
		i--;
	}
	return fatorial;
}

void main(){
	double i = 1;
	double e = 1;
	while((1/fatorial(i)) > delta){
		e = e + 1.0/fatorial(i);
		i++;
		printf("%lf %lf %lf\n", e, i, fatorial(i));
	}

	printf("fatorial de 5: %lf\n", fatorial(5));
	printf("Euler: %lf\n", e);

}*/

/*O conceito de um aluno é calculado a partir de sua nota, seguindo a tabela abaixo. 
Faça um programa que lê a nota de um aluno do teclado e imprime seu conceito. 
Assuma que alunos só podem receber notas inteiras (isto é, sem decimais). 
Você deve usar o comando switch para verificar a nota lida.
0 a 4  F
5      E
6      D
7      C
8      B
9+     A
*/
/*
#define INF 2000000000
char calculaConceito(int nota){

	switch(nota){
		
		case 0 ... 4:
			return 'F';
		case 5:
			return 'E';
		case 6:
			return 'D';
		case 7:
			return 'C';
		case 8:
			return 'B';
		case 9 ... INF:
			return 'A';
		default:
			printf("Numero Invalido\n");
			return 'X';
	}
}

int main(int argc, char const *argv[])
{	
	int pontuacao = 0;
	scanf("%d", &pontuacao);
	printf("O conceito eh: %c\n", calculaConceito(pontuacao));
	return 0;
}
*/
/*Faça um programa que lê um número inteiro N e imprime as N primeiras linhas do triângulo de Floyd:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

Desafio: Faça um programa para imprimir a N-ésima linha sem calcular as anteriores.
*/


/*int main(int argc, char const *argv[])
{
	int n = 0;
	scanf("%d", &n);
	int impressao = 1;
	int inicial = (((n - 1) * n) / 2) + 1;
	for (int i = 1; i <= n; ++i)
	{
		printf("%d ", inicial);
		inicial++;
	}
	printf("\n");
	for (int i = 1; i <= n; ++i)
	{

		for (int j = 1; j <= i; ++j)
		{	
			printf("%d ", impressao);
			impressao++;
		}
		printf("\n");
	}

	return 0;
}*/

/*Implemente um programa que leia um string e conte o número de caracteres. 
Não use a função strlen. 
Para ler uma string de até 127 caracteres do teclado, use o seguinte código:

char linha[128];
printf("digite uma linha:\n");
fgets(linha, 128, stdin);
*/

/*int main(int argc, char const *argv[])
{
	char linha[128];
	printf("digite uma linha:\n");
	fgets(linha, 128, stdin);
	int contador = 0;
	while(linha[contador] != 0){
		contador++;
	}
	printf("%d\n", contador - 1);
	return 0;
}*/
/*Faça um programa que leia um string e modifique todos os caracteres minúsculos por caracteres maiúsculos.

Dica: os caracteres minúsculos tem o código ASCII entre 97 e 122 e os caracteres maiúsculos tem o código ASCII entre 65 e 90.
*/

int main(){
	char string[128];
	char letra;
	int i = 0;
	
	
	do{
		scanf("%c", &letra);
	if (97 <= letra && letra<= 122)
		letra = letra - 32;
	
		string[i] = letra;
		i++;
	}while(letra != '\0' && letra != '\n');


	printf("Linha maiusculo: %s\n", string);

	
	//return 0;
}
/*
int main(){
    char frase[128];
    char letra;
    int i = 0;

    do{
        scanf("%c", &letra);

        if(letra >= 97 && letra <= 122)
            letra = letra - 32;

        frase[i] = letra;
        i++;

    }while(letra != '\0' && letra != '\n');

    printf("%s\n", frase);

}
/*Implemente código C para testar se uma string é um palíndromo. 
Um palíndromo é uma palavra idêntica quando lida de trás para frente, como "arara", "radar" e "reviver".*/

