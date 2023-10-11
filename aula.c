#include <stdio.h>

int main(){

  int carro;

  printf("qual a velocidade do carro? (km/h)");
  scanf("%d", &carro);

  if (carro > 80) {
    carro *= 5;
    printf("você foi multado em cerca de %d reais", carro);
  }else {
    printf("você não vai ser multado!");
  }

  return 0;
}


