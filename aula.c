#include <stdio.h>
#include <string.h>


int main() {

char nome[50][50], sexo[50][50];
int salario[4];

for (int i; i <= 4; i++){
  printf("nome:");
  scanf("%s", nome[i]);
  printf("sexo (M/F): ");
  scanf("%s", sexo[i]);
  printf("salario:");
  scanf("%d", &salario[i]);
}
for (int i; i <= 4; i++){
  if ((strcmp(sexo[i], "f") == 0) && salario[i] >= 5000){
    printf("%s \n", nome[i]);
    printf("%s \n", sexo[i]);
    printf("%d \n", salario[i]);
  }
}

  return 0;
}

