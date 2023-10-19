#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  
  srand(time(0));
  int num = (rand() % 5) + 1;
  int res;
  printf("adivinhe o numero: ");
  scanf("%d", &res);
  (res == num ) ? printf("parabens! você acertou o numero!\n") : printf("você infelizmente errou o numero! ele era %d\n", num);

} 
