#include <stdio.h>

int main() {
    int A, B, Z;

    printf("Apresente valores para A e B:\n");
    scanf("%d", &A);
    scanf("%d", &B);

    Z = (A - B) * (A - B);

    printf("Quadrado da diferença é igual a:%d", Z);
    
}