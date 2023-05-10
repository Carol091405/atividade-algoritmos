#include <stdio.h>

int main() {
    float VOLUME, R, PI = 3.14159;

    printf("Apresente o valor do raio:\n");
    scanf("%f", &R);

    VOLUME = (4/3)* PI *(R*R*R);

    printf("Volume da esfera:%f", VOLUME);

}