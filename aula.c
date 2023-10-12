#include <stdio.h>

int main(){

 int i = 1;
 int peso, media, pesado, leve, pesadao;
 float altura;

 while (i <= 4) {
  printf("peso: ");
  scanf("%d", &peso);
  printf("altura: ");
  scanf("%f", &altura);

  media+=altura;

  if (peso >= 90) {
    pesado++;
  }else if (peso <= 50 && altura <= 1.50) {
    leve++;
  } if (peso >= 100 && altura >= 1.90) {
    pesadao++;
  }

   i++;

 }

 printf("media altura: %d, pesam mais de 90: %d, muito leve: %d, muito pesado: %d", (media/2), pesado, leve, pesadao);

  return 0;
}


