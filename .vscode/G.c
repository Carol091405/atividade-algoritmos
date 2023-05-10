#include <stdio.h>

int main() {
    int a, b, c, d, S1, S2, S3, S4, S5, S6, M1, M2, M3, M4, M5, M6;

    printf("Apresente valores para a, b, c e d:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    S1 = a + b;
    S2 = a + c;
    S3 = a + d;
    S4 = b + c;
    S5 = b + d;
    S6 = c + d;
    M1 = a * b;
    M2 = a * c;
    M3 = a * d;
    M4 = b * c;
    M5 = b * d;
    M6 = c * d;

    printf("Resultados das operações: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", S1, S2, S3, S4, S5, S6, M1, M2, M3, M4, M5, M6);

}