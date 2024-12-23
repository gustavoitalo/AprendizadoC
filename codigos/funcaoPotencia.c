#include <stdio.h>

  int potencia(int a, int b){
    int c = a;
    for (int i = 2; i <= b; i++){
      a *= c;
    }
    return a;
  }

int main() {

  printf(" %d ", potencia(5, 3));

  return 0;
}
