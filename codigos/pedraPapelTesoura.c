#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

enum comp {
  PEDRA = 1, PAPEL, TESOURA
};

int main() {
  
  srand(time(0));
  int num = (rand() % 3) + 1;
  char res[10], comp[10];
  switch (num) {
    case PEDRA:
      strcpy(comp, "pedra");
      break;
    case PAPEL:
      strcpy(comp, "papel");
      break;
    case TESOURA:
      strcpy(comp, "tesoura");
      break;
  }
  printf("comp: %s\n", comp);
  printf("pedra, papel ou tesoura? ");
  scanf("%s", res);

  if (((strcmp(comp, "tesoura") == 0) && (strcmp(res, "pedra") == 0)) || ((strcmp(res, "tesoura") == 0) && (strcmp(comp, "pedra") == 0))) {
    printf("pedra quebra tesoura!\n");
    } else if (((strcmp(comp, "papel") == 0) && (strcmp(res, "tesoura") == 0)) || ((strcmp(res, "papel") == 0) && (strcmp(comp, "tesoura") == 0))) {
    printf("tesoura corta papel\n");
  } else if (((strcmp(comp, "pedra") == 0) && (strcmp(res, "papel") == 0)) || ((strcmp(res, "pedra") == 0) && (strcmp(comp, "papel") == 0))) {
    printf("papel cobre pedra\n");
  } else if (strcmp(comp, res) == 0){
    printf("vocês escolheram a mesma coisa!\n");
  }else {
    printf("resposta invalida!\n");
  }
} 
