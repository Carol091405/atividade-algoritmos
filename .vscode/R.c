#include <stdio.h>

int main() {
    int A, B, C, VN, VB;
    float PVV, PA, PB, PC, PVN, PVB, T;

    printf("Apresente os valores dos votos para a, b, c, nulos e em branco:\n");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &VN);
    scanf("%d", &VB);

    T = A+B+C+VN+VB;
    PVV=(A+B+C)*100/T;
    PA=A*100/T;
    PB=B*100/T;
    PC=C*100/T;
    PVN=VN*100/T;
    PVB=VB*100/T;

    printf("Resultado em porcentagem dos votos totais,votos válidos, votos de a, de b, de c, de votos nulos e votos em branco:%f, %f, %f, %f, %f, %f", T, PVV, PA, PB, PC, VN, VB);

}