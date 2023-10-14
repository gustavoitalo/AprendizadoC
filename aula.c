#include <stdio.h>
  
int media(int a, int b){
  return (a+b)/2;
}

  int situacao(int a){
    if (a <  3) {
      printf("você esta reprovado! ");
    }else if (a >= 3 && a <= 5 ){
      printf("você esta de recuperação! ");
    }else {
      printf("você esta Aprovado! ");
    }
    return 0;
  }

int main() {

  situacao(media(3,3));

  return 0;
}
