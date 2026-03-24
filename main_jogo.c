// jogo de advinhacao de numero aleatorio, com dicas e sistema de pontos.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "jogo.h"

int main() {
    int continuar;
    int pontos = 0;
    int contador_tentativas = 0;

    srand(time(NULL)); // inicializa um numero aleatorio com base no tempo atual

    do {
        jogar_rodada(&continuar, &pontos, &contador_tentativas); // chama a funcao 
    } while (continuar == 1); 

    printf("Fim de jogo.\n");
    return 0;
}