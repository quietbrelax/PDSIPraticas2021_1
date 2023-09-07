#include <math.h>
#include <stdlib.h>
#include <stdio.h>


/*Exercício 1: Produto Escalar

Escreva um programa em C que recebe dois arranjos de números reais u e v e a dimensão n dos dois arranjos
que retorna o produto escalar de u e v. 
O produto escalar de dois arranjos é dado pela seguinte expressão: 
u * v = u0 * v0 + u1 * v1 + u2 * v2 ... + un * vn
.

Assuma que n é menor que o número máximo de elementos do arranjo (por exemplo, 100). 
Para testar, preencha cada vetor com um único valor.
*/
#define Tamanho_max 1000
#define qntNum 5000000
/*
int main(int argc, char const *argv[])
{
	double u[Tamanho_max], v[Tamanho_max];
	double produto = 0;
	unsigned int n = 0;

	do{
		printf("\nDigite a dimensao dos vetores(max 100): ");
		scanf("%d", &n);
		if(n > Tamanho_max){
			printf("Dimensao invalida\n");
		}
	}while(n > Tamanho_max);
	printf("Digite os valores do primeiro vetor separadamente. Ex: 1 2 3 ... 100\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%lf", &u[i]);
	}
	printf("Digite os valores do segundo vetor separadamente. Ex: 1 2 3 ... 100\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%lf", &v[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		produto += (u[i] * v[i]);
	}

	printf("O produto escalar dos vetores eh: %lf\n", produto);

	return 0;
}
*/
/*
Exercício 2: Fibonacci

A sequência de Fibonacci pode ser definida como:

fib(0) = 1
fib(1) = 1
fib(n) = fib(n-1) + fib(n-2), para n>2

Implemente um programa que calcule a série de Fibonacci e armazene em um vetor cada elemento da série, 
de forma que a posição 0 armazene o termo 0, a posição 1 o termo 1, e assim por diante. 
Lembro que o termo 0 é o inteiro 1. 
Seu programa deve receber do usuário um número entre 0 e 1000 e imprimir o termo correspondente ao número recebido. 
O usuário deve ser capaz de entrar com vários números interativamente em uma mesma execução. 
O programa termina quando o usuário entrar com um número negativo ou maior que 1000.
Dica: se o tipo int for insuficiente para armazenar todos os elementos da série, use outro tipo de dados.

int main(int argc, char const *argv[])
{
	int tamSeq = 0;
	double seq[Tamanho_max];
	seq[0] = 1;
	seq[1] = 1;
	do{
			
		printf("\nDigite a posicao do numero da sequencia de Fibonacci: ");
		scanf("%d", &tamSeq);
		if(tamSeq >= 0 && tamSeq<= Tamanho_max){
			for (int i = 2; i <= tamSeq; ++i){
					seq[i] = seq[i - 1] + seq[i - 2];
			}
			printf("fib(%d)= %4.3e\n", tamSeq, seq[tamSeq]);
		}
		else{
		printf("Fim do programa\n");
		}	
	}while(tamSeq >= 0 && tamSeq<= Tamanho_max);	
	
	return 0;
}
*/
/*
Exercício 3: Média dos elementos de um vetor***

Escreva uma função em C que recebe um vetor de números reais v 
e número de elementos n armazenados em v e que retorna a média dos n elementos armazenados em v. 
O vetor deve ser preenchido com números aleatórios através de uma outra função. 
Para gerar números aleatórios, use a função drand48() no Linux, ou a função rand() no Windows, da biblioteca stdlib.h.

double mediaVetor(int vetor[], int n){
	int soma = 0;
	for (int i = 0; i < n; ++i)
	{
		soma += vetor[i];
	}
	return (double) soma / (double) n;
}
void preenche(int *vetor, int n){
	for (int i = 0; i < n; ++i)
	{
		vetor[i] = rand();
	}
}

int main(int argc, char const *argv[])
{
	double media = 0;
	int vetor[Tamanho_max];
	int n;
	do{
		printf("\nDigite o tamanho do vetor(ate 1000): ");
		scanf("%d", &n);
		if(n < 0 || n > Tamanho_max){
			printf("Tamanho invalido.\n");
		}
	}while(n < 0 || n > Tamanho_max);
	preenche(vetor, n);
	media = mediaVetor(vetor, n);
	printf("A media eh: %lf\n", media);
	return 0;
}
 
Exercício 4: Intercalação de vetores

Faça um programa que leia 2 vetores X e Y de 10 elementos, cada um. 
Intercale os elementos desses 2 vetores formando assim um novo vetor Z de 20 elementos, 
onde, nas posições ímpares de R, estejam os elementos de X e, nas posições pares, os elementos de Y. 
Exemplo: 
Se 
X = 3, 5, 2, 8, 4 
e
Y = 1, 7, 6, 5, 2 
então 
Z = 3, 1, 5, 7, 6, 8, 5, 4, 2
Imprimir o vetor Z.

int main(int argc, char const *argv[])
{
	int X[10], Y[10], Z[20];
	int contX = 0, contY = 0;
	printf("Digite os valores do primeiro vetor separadamente. Ex: 1 2 3 ... 10\n");
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d", &X[i]);
	}
	printf("Digite os valores do segundo vetor separadamente. Ex: 1 2 3 ... 10\n");
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d", &Y[i]);
	}

	for (int i = 0; i < 20; ++i)
	{
		if(i % 2 != 0){
			Z[i] = X[contX];
			contX++;
		}
		else{
			Z[i] = Y[contY];
			contY ++;
		}
	}
	printf("\nZ =  ");
	for (int i = 0; i < 20; ++i)
	{
		printf("%d ", Z[i]);
	}
	return 0;
}
*/
/*
Exercício 5: Inverso de um vetor

Faça um programa para ler um vetor X de n elementos e gerar um outro vetor com esses n elementos em ordem inversa. 
Exemplo: Se 
X = 3, 5, 2, 8, 4
deverá ser gerado um vetor 
Y = 4, 8, 2, 5, 3
O valor de  é lido pelo teclado.

int main(int argc, char const *argv[])
{
	int X[Tamanho_max], Y[Tamanho_max];
	int n = 0;
	do{
		printf("\nDigite o tamanho do vetor(ate 1000): ");
		scanf("%d", &n);
		if(n < 0 || n > Tamanho_max){
			printf("Tamanho invalido.\n");
		}
	}while(n < 0 || n > Tamanho_max);
	printf("Digite os %d elementos do vetor entre espacos:\n", n);
	for (int i = 0; i < n; ++i){
		scanf("%d", &X[i]);
	}
	for (int i = 0; i < n; ++i){
		Y[i] = X[n - 1 - i];
	}
	for (int i = 0; i < n; ++i){
		printf("Y[%d] = %d\n", i, Y[i]);
	}
	return 0;
}
*/

/*
Exercício 6: União de vetores

Faça um programa para preencher dois vetores X e Y de 60 posições com valores aleatórios entre 0 e 365. 
Imprima o conjunto união desses dois vetores. 
Curiosidade: leia sobre o paradoxo do aniversário.

int main(int argc, char const *argv[])
{
	int X[Tamanho_max], Y[Tamanho_max], U[2 * Tamanho_max];
	int tamAtual = 0, achei = 0;
	int numero = 0;
	for (int i = 0; i < Tamanho_max; ++i){
		do{
			X[i] = rand();
		}while(X[i] < 0 || X[i] > 365);
		do{
			Y[i] = rand();
		}while(Y[i] < 0 || Y[i] > 365);
	}
	for (int i = 0; i < Tamanho_max; ++i){
		numero = X[i];
		achei = 0;
		for (int j = 0; j < tamAtual; ++j){
			if(numero == U[j]){
				achei = 1;
				break;
			}
		}
		if(!achei){
			U[tamAtual] = numero;
			tamAtual++;
		}
		numero = Y[i];
		achei = 0;
		for (int j = 0; j < tamAtual; ++j){
			if(numero == U[j]){
				achei = 1;
				break;
			}
		}
		if(!achei){
			U[tamAtual] = numero;
			tamAtual++;
		}
	}
	printf("\n Vetor Uniao\n");
	for (int i = 0; i < tamAtual; ++i){
		printf("U[%d] = %d\n", i, U[i]);
	}
	return 0;
}
*/
/*
Exercício 7: Teste da Função rand()

Uma boa função para geração de números aleatórios deve gerar valores com igual probabilidade,
 i.e., se eu quero gerar 100 valores entre 1 e 10, o número de vezes que cada número é gerado deve ser próximo de 10. 
 Assim, nesta prática você deve criar um programa para testar a qualidade da função rand() da linguagem C. 
 Para isso, gere 5.0000.000 números aleatórios entre 0 (inclusive) e 999 (inclusive) e conte quantas vezes cada número foi gerado. 
 Imprima a diferença entre a maior e a menor contagem. 
 Exemplo: se o número 83 foi aquele que mais vezes foi gerado, com 5315 gerações, e o número 762 foi aquele que menos vezes foi gerado,
 com 4802 gerações, então seu programa deve imprimir 5315 - 4802 = 513.



Dica: crie um vetor de inteiros de 1000 posições para armazenar quantas vezes cada número (entre 0 e 999) é gerado. 
Assim, cada vez que você gerar aleatoriamente o número , faça vetor_contagem[k]++. 
Exemplo: se você gerar o número 888, faça vetor_contagem[888]++. 
No final, vetor_contagem[k] conterá o número de vezes que o número  foi gerado.

DESAFIO PARA OS FORTES: Além da diferença, imprimir também o desvio padrão das contagens. 
Para entender o que é o desvio padrão e como ele é calculado, consulte a Wikipedia ou qualquer site disponível na Internet.
*/
int main(int argc, char const *argv[])
{
	int vetorQtd[Tamanho_max];
	int numero, maior, menor, soma;
	double somatorio = 0; 
	double media, desvio;
	for (int i = 0; i < Tamanho_max; ++i){
		vetorQtd[i] = 0;
	}
	for (int i = 0; i < qntNum; ++i){
		do{
			numero = rand();
		}while(numero < 0 || numero > Tamanho_max - 1);
		vetorQtd[numero]++;
	}
	maior = vetorQtd[0];
	menor = vetorQtd[0];
	soma = vetorQtd[0];
	for (int i = 1; i < Tamanho_max; ++i){
		if(vetorQtd[i] >= maior){
			maior = vetorQtd[i];
		}
		if(vetorQtd[i] <= menor){
			menor = vetorQtd[i];
		}
		soma += vetorQtd[i];
	}
	media = (double)soma/ (double)Tamanho_max;
	for (int i = 0; i < Tamanho_max; ++i){
		somatorio += pow((double)vetorQtd[i] - media, 2);
	}
	desvio = sqrt(somatorio / (double)Tamanho_max);
	printf("\nDeferenca: %d\n", maior - menor);
	printf("Desvio padrao: %.8lf\n", desvio);
	return 0;
}
