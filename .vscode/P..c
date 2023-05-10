#include <stdio.h>

int main() {
    float SM, PR, NS;

    printf("Apresente os valores do salário e do reajuste percentual:\n");
    scanf("%f", &SM);
    scanf("%f", &PR);

    NS = SM + SM*PR / 100;

    printf("Novo salário:%f", NS);
    
}