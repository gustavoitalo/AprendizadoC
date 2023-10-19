#include <stdio.h>


int main() {
  
  char nome[] = "Gustavoiatlomendesnlima";
  char *pNome = nome;

  printf("%ld\n", sizeof(nome));
  printf("%ld\n", sizeof(pNome));
  
} 
