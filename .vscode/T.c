#include <stdio.h>

int main() {
    float VELOCIDADE, DISTANCIA, TEMPO;
    
    printf("Apresente a distância em quilômetros e o tempo em minutos:\n");
    scanf("%f", &DISTANCIA);
    scanf("%f", &TEMPO);

    VELOCIDADE = (DISTANCIA*1000) / (TEMPO*60);

    printf("Velocidade em metros por segundo:%f", VELOCIDADE);

}