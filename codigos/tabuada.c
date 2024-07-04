#include <stdio.h>

int main(){

  int v;

  printf("digite um valor: ");
  scanf("%d",&v);

  for (int i = 1; i <= 10; i++){
    int d = v*i;
    printf("%d x %d = %d\n", v, i, d);
  }

  return 0;
}


