#include <stdio.h>

int main(){

  int i = 1;
  int num;

  printf("quantas vezes?");
  scanf("%d", &num);

while (i <= num) {
  printf("%d\n", i);
  i++;
}
printf("Acabou!");

  return 0;
}


