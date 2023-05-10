#include <stdio.h>

int main() {
    int A,B,C;

    printf("Apresente valores para as variáveis a e b:\n");
    scanf("%d", &A);
    scanf("%d", &B);

    C=A;
    A=B;
    B=C;

    printf("Troca realizada. Valor de A:%d\n Valor de B: %d", A, B );


   
}