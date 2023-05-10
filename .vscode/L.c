#include <stdio.h>

int main() {
    float R, D, d;

    printf("Apresente as quantias para valor em reais e cotação do real:\n");
    scanf("%f", &R);
    scanf("%f", &d);

    D = R*d;

    printf("Conversão em dólar:%.2f", D);
}