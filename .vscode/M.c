#include <stdio.h>

int main() {
    int A, B, C, W;

    printf("Insira os valores desejados:\n");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    W = (A*A) + (B*B) + (C*C);

    printf("Resultado da soma dos quadrados:%d", W);
    
    }