#include <stdio.h>

int main() {
    int fahrenheit, celsius;

    printf("digite fahrenheit:\n");
    scanf("%d", &fahrenheit);

    celsius = (((fahrenheit - 32) * 5) - 9);

    printf("Resultado em celsius: %d", celsius);

}