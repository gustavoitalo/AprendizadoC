#include <stdio.h> //o "include" serve para importar bibliotecas.

int main() // o computador executa tudo que estiver na função main.
{
    const unsigned short I = 123; // quando uma variavel é definida como "const" significa que ela é constante e não pode ser mudada.
                                 // "unsigned" significa que esse int não pode ter numeros negativos.
                                // "short" só significa que o numero vai ser pequeno, você não necessariamente precisa declarar como "int".

    long long int a = 378646234677676; // um "int" normalmente ja é um long então para numeros grandes é necessario colocar dois deles.

    printf("hello world!\n"); //função basica para printar algo no termainal, o "\n" serve para pular uma linha. 

    return 0; //serve para retornar a função main() para 0, finalizando ela.
}
