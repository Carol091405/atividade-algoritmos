#include <stdio.h>

int main() {
    int C, D, N;

    printf("Apresente o número inteiro:\n");
    scanf("%d", &N);

    C = N-1;
    D = N+1;

    printf("Sequência crescente:%d, %d, %d", C, N, D);

}