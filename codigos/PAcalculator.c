#include <stdio.h>

int main(){

  int termo, razao, soma;

  printf("Qual o primeiro termo da PA? ");
  scanf("%d", &termo);
  printf("qual a razão da PA? ");
  scanf("%d", &razao);

  soma = termo;
  printf(" %d ", termo);

  for (int i = 1; i <= 9; i++) {
    termo += razao;
    soma += termo;
    printf(" %d ", termo);
  }

  printf("\n a soma desses numeros é: %d", soma);

  return 0;
}
