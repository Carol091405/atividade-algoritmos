#include <stdio.h>

int main() {
    float P, p = 0.3048, M;

    printf("Apresente o valor em pés:\n");
    scanf("%f", &P);

    M = P*p;

    printf("Conversão para metros:%f", M);
    
}