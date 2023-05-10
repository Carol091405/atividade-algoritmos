#include <stdio.h>

int main() {
    int N, A, B, C;

    printf("Apresente os valores desejados:\n");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    N = (A + B +C)*(A + B +C);

    printf("Resultado do quadrado da soma:%d", N);
    
}