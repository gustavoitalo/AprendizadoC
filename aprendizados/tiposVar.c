#include <stdio.h>

int main()
{
// Aqui vou colocar os tipos existentes de variaveis:

    int numero = 123;   //so pode numero inteiro (gasta 2 a 4 bytes).
    float decimal1 = 1.23;  //pode numero com decimais de ate 6-7 digitos (gasta 4 bytes).
    double decimal2 = 1.23; //pode numero com decimais de ate 15 digitos (gasta 8 bytes).
    char letra = 'A';   //permite apenas uma letra (gasta 1 byte).

// Espesificasões de formato de cada variavel:

    printf ("%d ou %i\n", numero);    // para o formato int
    printf ("%f\n");    //para float
    printf ("%d ou %lf\n"); //para double
    printf ("%c\n"); // para char
// %s é usado para strings porem ainda não foi abordado no curso.

    return 0;
}
