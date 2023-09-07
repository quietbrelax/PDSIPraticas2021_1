#include <stdio.h>
#include "pratica4.h"


int main(int argc, char const *argv[])
{
	printf("%d\n", ehPar(5));
	printf("%.2f\n", areaCirculo(3));
	printf("%.2f\n", paraMetrosPorSegundo(36));
	printf("%d\n", maior3(4, 6, 8));
	printf("%d\n", ehDivisivelPor3ou5(15));
	printf("%d\n", ehDivisivelPor3ou5(18));
	printf("%.2f\n", pesoIdeal(1.78, 'F'));

	return 0;
}