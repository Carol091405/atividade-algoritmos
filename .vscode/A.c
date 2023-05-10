#include <stdio.h>

int main() {
  int fahrenheit, celsius;

  printf("digite celsius:\n");
  scanf("%d", &celsius);

  fahrenheit = (celsius * 9 / 5) + 32;

  printf("resultado em fahrenheit: %d", fahrenheit);

}