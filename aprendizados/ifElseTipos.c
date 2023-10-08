#include <stdio.h>

int main()
{
    int age = 18;

if (age >= 18)       // Metodo tradicional de fazer condições
{
    printf("adult");
}
else 
{
    printf("child");
}                           

(age >= 18) ? printf("adult") : printf("child"); // Ternary Operator

    return 0;
}
