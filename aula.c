#include <stdio.h>

int main(){
  
  int i = 1;
  int idade, media, Midade, midade;
  int idadem = 0;

  while (i <= 5) {
    printf("qual a sua idade? ");
      scanf("%d", &idade);
      media+=idade;
      if (idade >= 18){
        Midade++;
      }else if (idade <= 5) {
        midade++;
      } 
      if (idade > idadem){
        idadem = idade;
      }
    i++;
  }
  printf("a media de idade é %d, %d pessoas tem mais de 18 e %d tem menos de 5; a maior idade é de %d ", (media/5), Midade, midade, idadem);

  return 0;
}


