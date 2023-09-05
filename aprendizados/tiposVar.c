#include <stdio.h>
#include <stdbool.h>

int main()
{
// Aqui vou colocar os tipos existentes de variaveis:

    int numero = 123;   //so pode numero inteiro (gasta 2 a 4 bytes).
    float decimal1 = 1.23;  //pode numero com decimais de ate 6-7 digitos (gasta 4 bytes).
    double decimal2 = 1.23; //pode numero com decimais de ate 15 digitos (gasta 8 bytes).
    char letra = 'A';   //permite apenas uma letra (gasta 1 byte).
    bool trueOrFalse = true; // permite apenas dois formatos logicos, true e false.

// Espesificasões de formato de cada variavel:

    printf ("%d ou %i\n", numero);    // para o formato int.
    printf ("%f\n", decimal1);    //para float.
    printf ("%d ou %lf\n", decimal2); //para double.
    printf ("%c\n", letra); // para char.
    printf ("%d\n", trueOrFalse); // para o tipo booleano o %d tambem é usado.
// %s é usado para strings porem ainda não foi abordado no curso.

    return 0;
}
