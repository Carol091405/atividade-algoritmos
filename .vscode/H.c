#include <stdio.h>

int main() {
    int comprimento, largura, altura, volume;

    printf("Insira os valores para comprimento, largura e altura:\n");
    scanf("%d", &comprimento);
    scanf("%d", &largura);
    scanf("%d", &altura);

    volume = comprimento * largura * altura;

    printf("Volume Total:%d", volume);

}