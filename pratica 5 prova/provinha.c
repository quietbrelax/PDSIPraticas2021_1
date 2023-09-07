//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//ex.1
int cadastraUsuario(int * chave, int * senha){
	int n; //variavel para o numero de tentativas possíveis
	//coletar dados
	printf("Cadastro chave:");
	scanf("%d", chave);
	printf("Cadastro senha: ");
	scanf("%d", senha);
	//validar os dados
if(*chave<1000||*chave>999999||*senha<1000||*senha>999999){
	//pedir novos dados
	do{
		printf("Cadastro invalido. Por favor, digite novos dados.\n Chave: ");
		scanf("%d", chave);
		printf("\nSenha: ");
		scanf("%d", senha);
	} while(*chave<1000||*chave>999999||*senha<1000||*senha>999999);
}
	//definir n
	if (*chave>2000){
	n = 3;
	}
	else{
	n = 5;
	}
//função retorna a quantidade de tentativas baseado na chave
return n;
}
//ex.2
int verificaSenha(int tentativa, int senha){
	//conferir se a entrada é a mesma senha cadastrada
	if(tentativa == senha){
		printf("Acerto mizeravi\n");
		return 1;
	}
	else{
		printf("Erroow\n");
		return 0;
	}
}
//ex.3 e ex.6
int acessoConta(int senha, int n){
	//tentativa de senha pelo usuário
	int tentativa;
	//variaveis para a conta referente a questão 6
	float divisor, checaDivisao;
	scanf("%d", &tentativa);
	//a primeira tentativa ja foi usada
	int tentativasUsadas = 1;
	//primeira chegagem
	if(verificaSenha(tentativa, senha) == 1){
		printf("You are in\n");
		return 1;
	}
	//caso digitem -999 como primeira tentativa
	if(tentativa == -999){
			while(tentativasUsadas < n){
				scanf("%f", &divisor);
				if(divisor>10){
					checaDivisao = senha / divisor;
					int aux = checaDivisao;
					if (checaDivisao - aux == 0){
						printf("Validado pelo divisor.\n", );
						return 1;
					}
				}
			
				tentativasUsadas++;
			}
	}
	//errou a primeira vez
	else{
		//proximas chegagens, desde que ão ultrapasse o numero de tentativas previsto
		while(tentativasUsadas<n){
			scanf("%d", &tentativa);
			if(verificaSenha(tentativa, senha) == 1){
			printf("You are in\n");
			return 1;
			}
			//caso errem primeiro e depois coloquem -999
			if(tentativa == -999){
				//numero de tentativas (o -999 incluso) não pode passar de n
				tentativasUsadas++;
				while(tentativasUsadas < n){
					scanf("%f", &divisor);
					//o divisor tem que ser maior que 10
					if(divisor>10){
						checaDivisao = senha / divisor;
						int aux = checaDivisao;
						//float - int. Se a divisão não for exata, a parte não inteira do float deixara a subtração diferente de 0
						if (checaDivisao - aux == 0){
							return 1;
						}
					}
					tentativasUsadas++;		
				}
				//errou todas as opções do -999
				printf("Acesso negado\n");
				return 0;
			}
			tentativasUsadas++;
		}
		//se errarem todas as opções, acesso é negado
		printf("Acesso negado\n");
		return 0;
	}
	
}
//ex.4
char cartaoCredito(int score){
	//atribuição à conta de acordo com a entrada
	if(0<=score && score<=400){
		printf("Cartao negado\n");
		return 'N';
	}
	else if(401<=score && score<=600){
		printf("Necessita de mais detalhes\n");
		return 'X';
	}
	else if(601<=score && score<=800){
		printf("Cartao basico\n");
		return 'B';
	}
	else if(801<= score && score<= 1000){
		printf("Cartao gold\n");
		return 'A';
	}
	else{
		printf("Score invalido\n");
		return 'X';
	}

}
//ex.7
int codigoVerificador(int chave){
	//variavel responsável por guardar quantos 1's existe na representação binária
	int armazena1 = 0;
	//enquanto a chave existir, é para repetir o processo
	while(chave > 0)
	{
		//se a chave for ímpar(divisão por 2 da resto 1), o seu ultimo numero na divisão binária é 1
		if(chave % 2 !=0){
			//adiciona 1 numero 1 na variavel, equivalente ao 1 das unidades
			armazena1 ++;
		}
		//desloca o numero um bit para a direita, analisando o numero inteiro bit a bit até que seja zerado
		chave = (chave >> 1);

	}
	//retornar apenas as unidades da quantidade de bits 1
	return armazena1 % 10;
}
//ex.5
void main(){
	//definição de variaveis 
	int chaveConteudo, senhaConteudo, score, tentativasPossiveis;
	//calculo da quantidade de tentativas disponiveis baseado na chave
	tentativasPossiveis = cadastraUsuario(&chaveConteudo, &senhaConteudo);
	//calculo do score
	score = chaveConteudo % 1000;
	//acesso realizado com sucesso
	if(acessoConta(senhaConteudo, tentativasPossiveis) == 1){
		printf("Acesso realizado com sucesso\n");
		cartaoCredito(score);
	}
	//falha no acesso
	else{
		printf("Cliente bloqueado\n");
	}
	printf("%d", codigoVerificador(chaveConteudo));
}