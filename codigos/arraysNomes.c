#include <stdio.h>
#include <string.h>

int main() {
  
  char nomes[][10] = {"gustavo", "carlos", "pablo", "rodrigo", "wahia"};
  
  strcpy(nomes[2], "ruas");

  for (int i = 0; i < sizeof(nomes)/sizeof(nomes[0]); i++)
      printf("%s\n", nomes[i]);

} 
