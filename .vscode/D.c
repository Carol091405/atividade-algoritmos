#include <stdio.h>

int main() {
    int DISTANCIA, TEMPO, VELOCIDADE;

    printf("Escreva os valores para tempo e velocidade:\n");
    scanf("%d", &TEMPO);
    scanf("%d", &VELOCIDADE);

    DISTANCIA = TEMPO * VELOCIDADE;

    printf("Distância:%d", DISTANCIA);

}