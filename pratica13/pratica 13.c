#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>


struct Guerreiro {
    int ataque;
    int defesa;
    int carisma;
    int pontos_vida;
    int id_guerreiro;
    
};

int random(int n){
    return rand() % n;
}

int randInt(int min, int max){
    return min + random(max - min +1);
}

int rolaDados(int seed){
    srand(seed);
    
    int dadoUm = 0, dadoDois = 0, dadoTres = 0;
    dadoUm = randInt(1, 6);
    dadoDois = randInt(1, 6);
    dadoTres = randInt(1, 6);
    
    return dadoUm + dadoDois + dadoTres;
}
void criaGuerreiro (struct Guerreiro * guerreiro){
    int semente = 0;
    srand(time(NULL));
    semente = rand();
    guerreiro -> ataque = rolaDados(semente);
    semente = rand();
    guerreiro -> carisma = rolaDados(semente);
    semente = rand();
    guerreiro -> defesa = rolaDados(semente);
    int vida = 0;
    for(int i = 0; i < 3; ++i){
        vida += rolaDados(semente);
        semente = rand();
    }
    guerreiro -> pontos_vida = vida;
}
int bonusCarisma(int carisma){
    int bonusCarisma = 0;
    switch (carisma){
        case 18:
            bonusCarisma = 3;
            break;
        case 17:
            bonusCarisma = 2;
            break;
        case 16:
            bonusCarisma = 2;
            break;
        case 15:
            bonusCarisma = 1;
            break;
        case 7:
            bonusCarisma = -1;
            break;
         case 6:
            bonusCarisma = -1;
            break;
        case 5:
            bonusCarisma = -2;
            break;
        case 4:
            bonusCarisma = -2;
            break;
         case 3:
            bonusCarisma = -3;
            break;
        default:
            bonusCarisma = 0;
            break;
    }
    return bonusCarisma;
}
int main(int argc, char const *argv[])
{
    int seed = 0, x = 0;
    scanf("%d", &seed);
    x = rolaDados(seed);
    printf("%d\n", x);
    struct Guerreiro g1;
    criaGuerreiro(&g1);
    printf("%d\n", g1.ataque);
    printf("%d\n", g1.defesa);
    printf("%d\n", g1.carisma);
    printf("%d\n", g1.pontos_vida);
    printf("%d\n", bonusCarisma(3));
    return 0;
}