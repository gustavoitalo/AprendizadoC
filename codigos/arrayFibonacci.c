#include <stdio.h>


int main() {

  int n[15];


  for (int i; i <= 15; i++){
    n[i] = n[i-1] + n[i-2];
    printf(" %d ", n[i]);
  }
  

  return 0;
}

