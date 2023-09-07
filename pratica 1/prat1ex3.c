//1su21#7
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

	float conta;
	float juros = 1.0056;
	
	//primeiro mes
	conta = 789.54;
	conta *= juros;
	//segundo mes
	conta += 303.20;
	conta *= juros;
	//terceiro mes
	conta -= 58.25;
	conta *= juros;
	//quarto mes
	
	printf("\nPoupanca: %.2f\n", conta);
	system ("PAUSE");

}