#include <math.h>
#include <stdio.h>

float parteInteira(float x){
    return (int)x;
}
float parteFracionaria(float x){
    return x - (int)x;
}

float divInts(int x, int y){
    return x/y;
}
unsigned long long fast_pow_2(int expoente){
    int a = 1;
    if (expoente>0){
    a = a<<expoente;
    }
    else{
        a=a>>expoente;
    }
    return a;
}
int ddd(unsigned int number){
    return number/pow(10,8);
}
int soma1SePar(unsigned int number){
    number = number|1;
    return number;
}
int parOuImpar(unsigned int number){
    number=~number;
    number=number&1|number&0;
    return number;
}
void main(){

	printf("%d\n%d\n", parOuImpar(5), parOuImpar(6));

}