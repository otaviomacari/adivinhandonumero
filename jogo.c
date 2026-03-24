// jogo de advinhacao de numero aleatorio, com dicas e sistema de pontos.

#include <stdio.h>
#include <stdlib.h>
#include "jogo.h"

void jogar_rodada(int *continuar, int *pontos, int *contador_tentativas) {

    int numero, chute, nivel, max;

    printf("\nVamos advinhar um numero aleatorio!!\n");
    printf("==========================\n");
    printf("Voce podera escolhar entre o nivel facil, medio, dificil...\n");
    printf("Facil: Numero entre 0 e 9\n");
    printf("Medio: Numero entre 0 e 49\n");
    printf("Dificil: Numero entre 0 e 99\n");
    printf("Escolha o nivel (1/2/3): ");
        scanf("%d", &nivel);
    
        if(nivel == 1){ // nivel facil
            numero = rand () % 10;
            max = 10;
        }    
        else if(nivel == 2){ // nivel medio
            numero = rand () % 50;
            max = 50;
        }    
        else if(nivel == 3){ // nivel dificil
            numero = rand () % 100;
            max = 100;
        }
        else{
            printf("Nivel invalido, escolhendo nivel facil por padrao.\n");
            numero = rand () % 10; // nivel facil por padrao
            max = 10;
        }
    
        if(numero % 2 == 0)
        printf("Dica: O numero eh par\n");
        else
        printf("Dica: O numero eh impar\n");

    do {
        printf("Digite seu guess: 0 a %d: ", max - 1);
        scanf("%d", &chute);
    } while (chute < 0 || chute > max - 1); // garante que o chute esteja dentro do intervalo valido

    (*contador_tentativas)++; // incrementa o contador de tentativas a cada rodada

    if (chute == numero){
        printf("Opa, voce acertou! Numero: %d\n", numero);
        (*pontos)++; // incrementa os pontos a cada acerto
        (*contador_tentativas) = 0; // zera o contador de tantativas apos um acerto
    }
    else if(chute != numero){
        printf("Vish, deu ruim! O numero era: %d\n", numero);
    }

    printf("Voce fez %d pontos ate agora.\n", *pontos);
    printf("Voce fez %d tentativas ate agora.\n", *contador_tentativas);
    printf("Continuar? (Digite 1 para sim, 0 para sair): ");
    scanf("%d", continuar);
        system("cls");
}