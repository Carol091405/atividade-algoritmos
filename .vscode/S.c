#include <stdio.h>

int main() {
    float A, B, W, X, Y, Z;

    printf("Apresente os valores de A e B:\n");
    scanf("%f", &A);
    scanf("%f", &B);

    W = A+B;
    X = A-B;
    Y = A*B;
    Z = A/B;

    printf("Resultado da soma:%f", W);
    printf("Resultado da subtração:%f", X);
    printf("Resultado da multiplicação:%f", Y);
    printf("Resultado da divisão:%f", Z);

}