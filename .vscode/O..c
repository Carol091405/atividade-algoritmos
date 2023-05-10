#include <stdio.h>

int main() {
    int A, B, C, D, P, S;

    printf("Apresente os valores desejados:\n");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    
    P = A*C;
    S = B+D;

    printf("Resultado da multiplicação:%d", P);
    printf("Resultado da soma:%d", S);

}