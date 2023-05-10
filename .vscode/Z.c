#include <stdio.h>

int main() {
    int A, B, Z;

    printf("Apresente os valores de A e B:\n");
    scanf("%d", &A);
    scanf("%d", &B);

    Z = (A/B)*(A/B);

    printf("Resultado:%d", Z);

}