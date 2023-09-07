#include <stdio.h>
#include <math.h>
#include "pratica4.h"

#define pi 3.141592

float paraMetrosPorSegundo(float v){
	float velocidadeMs;
	velocidadeMs = v / 3.6;
	return velocidadeMs;
}

float areaCirculo(float raio){
	float area;
	area = pi * pow(raio, 2);
	return area;
}

int maior3(int n1, int n2, int n3){
	if(n1 > n2 && n1 > n3){
		return n1;
	}
	else if(n2 > n3){
		return n2;
	}
	else{
		return n3;
	}
}

int ehPar(int n){
	if(n % 2 ==0){
		return 1;
	}
	else{
		return 0;
	}
}

int ehDivisivelPor3ou5(int n){
	if(n % 3 ^ n % 5){
		return 1;
	}
	else{
		return 0;
	}
}

float pesoIdeal(float h, char sexo){
	float peso;
	if(sexo == 'M'){
		peso = (72.7 * h) - 58;
	}
	else{
		peso = (62.1 * h) - 44.7;
	}
	return peso;
}