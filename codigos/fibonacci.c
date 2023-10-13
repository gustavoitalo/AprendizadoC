#include <stdio.h>

  void fibonacci(int a){
  int n1 = 0;
  printf("%d ", n1);
  int n2 = 1;
  printf("%d ", n2);

 for (int i = 2; i <= a; i++){
  int n3 = n1 + n2;
  n1 = n2;
  n2 = n3;
  printf("%d ", n3);
}
  printf("\n");
  }

int main(){

  fibonacci(5);
  fibonacci(9);

  return 0;
}


