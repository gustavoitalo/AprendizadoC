#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int n[8], aux;
  for (int i = 0; i <= sizeof(n)/sizeof(n[0]); i++){
    printf(" %d ", n[i] = rand() % 20);
  }
  
  printf("\nvalor ordenado:\n");

  for (int i = 0; i <= sizeof(n)/sizeof(n[0]); i++) {
    for (int j = 0; j <= sizeof(n)/sizeof(n[0]); j++){
      if (n[i] < n[j]){
        aux = n[i];
        n[i] = n[j];
        n[j] = aux;
      }
    }
  }
  for (int i = 0; i <= sizeof(n)/sizeof(n[0]); i++) {
    printf(" %d ", n[i]);
  }
  

} 
