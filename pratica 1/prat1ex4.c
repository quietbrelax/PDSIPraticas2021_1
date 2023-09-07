//1su21#8
#include <stdio.h>
#include <stdlib.h>
 void main()
 {
 	float imc, altura, pesoideal, peso, imcidealmax, imcidealmin;
 	imcidealmax = 25;
 	imcidealmin = 18.5;
 	
 	//Brutus
 	peso = 122;
 	altura = 1.84;
 	imc = peso / (altura * altura);
 	printf("O IMC de Brutus eh: %.1f\n", imc);
 	pesoideal = peso - imcidealmax * altura * altura;
 	printf("Brutus presisa emagrecer %.1fkg\n", pesoideal);
 	

 	//Olivia

 	peso = 45;
 	altura = 1.76;
 	imc = peso / (altura * altura);
 	printf("O IMC de Olivia eh: %.1f\n", imc);
 	pesoideal = imcidealmin * altura * altura - peso;
 	printf("Olivia presisa engordar %.1fkg\n", pesoideal);
 	system ("PAUSE");
 	
 }