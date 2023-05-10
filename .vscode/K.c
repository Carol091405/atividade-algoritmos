#include <stdio.h>

int main() {
    float R, D, r;

    printf("Apresente as quantias para valor em dólar e cotação do dólar:\n");
    scanf("%f", &D);
    scanf("%f", &r);

    R = D*r;

    printf("Conversão em real:%f", R);

}