#include <stdio.h>
#include <math.h>

int main() {
    float PI = 3.14159;
    float R, VOLUME, ALTURA;

    printf("Digite os respectivos valores para a altura e o raio:\n");
    scanf("%f", &ALTURA);
    scanf("%f", &R);

    VOLUME = PI * (R * R) * ALTURA;

    printf("Volume:%f", VOLUME);
}