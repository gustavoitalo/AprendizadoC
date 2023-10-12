#include <stdio.h>
#include <string.h>

int main(){

  int i = 1;
  int anos,homem, mulher, media, mediaM, vinte;
  char sexo[10];

  while (i <= 5) {
    printf("quantos anos você tem? ");
    scanf("%d", &anos);
    printf("qual o seu sexo? (homem/mulher)");
    scanf("%s", sexo);
    if ((strcmp (sexo, "homem") == 0)) {
      homem++;
      mediaM+=anos;
    }else if ((strcmp(sexo, "mulher") == 0)) {
      mulher++;
      if (anos >= 20){
      vinte++;
      }
    }
    media+=anos;
    i++;
  }
  printf("Homem: %d, Mulheres: %d, Media: %d, MediaM: %d, Vinte: %d ", homem, mulher, (media/5), (mediaM)/homem, vinte) ;
  return 0;
}


