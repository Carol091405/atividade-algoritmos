#include <stdio.h>

int main() {
    float A, R, PI = 3.14159265;

    printf("Apresente o valor do raio:\n");
    scanf("%f", &R);

    A = PI*(R*R);

    printf("Área do círculo:%f", A);

}