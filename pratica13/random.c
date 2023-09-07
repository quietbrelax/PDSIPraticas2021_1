#include <stdlib.h>
#include <time.h>
#include <stdio.h>

//aleatorio float entre 0 e 1
float randf(){
	return (float)rand()/RAND_MAX;
}

//aleatorio entre min e max
float randoFloat(float min, float max){
	return min + randf()*(max - min);
}

//aleatorio entre 0 e n - 1
int random(int n){
	return rand() % n;
}

//aleatorio entre min e max (inclusive)
int randInt(int min, int max){
	return min + random(max - min + 1);
}