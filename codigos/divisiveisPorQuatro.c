#include <stdio.h>

int main(){

  int i = 30;

while (i >= 1) {
  if ((i % 4) == 0){
    printf(" [%d] ", i);
  }else{
    printf(" %d ", i);
  }
  i--;
}

  return 0;
}


