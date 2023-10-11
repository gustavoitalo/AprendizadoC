#include <stdio.h>

int main(){

  int numero;

  scanf("%d", &numero);
  if ((numero % 2) == 0) {
    printf("é uma numero par\n");
  }else{
    printf("não é par\n");
  }

  return 0;
}


