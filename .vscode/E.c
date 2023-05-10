#include <stdio.h>

int main() {

    float prestacao, valor, taxa, tempo;

    printf("Explicite as quantidades para valor, taxa e tempo:\n");
    scanf("%f", &valor);
    scanf("%f", &taxa);
    scanf("%f", &tempo);

    prestacao = (valor * (taxa/100) * tempo) + valor;

    printf("Valor total da prestação:%f", prestacao);

}