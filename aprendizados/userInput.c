#include <stdio.h>
#include <string.h>

int main() {

  int a;
  char b[25];

  printf("essa função inprime algo no terminal");
  scanf("%d", &a); //essa função lê o que o usuario digita e coloca na variavel a, não inclui espaços em branco.
  fgets(b, 25, stdin); // essa função é mais apropriada para strings e inclui espaços em branco, nela você coloca a variavel, o tamanho que deseja colocar nela e standart input no final.
  b[strlen(b)-1] = '\0'; // quando o fgets é chamado ele passa para uma proxima linha automaticamente, essa linha serve para se livrar disso.

  return 0;
}
