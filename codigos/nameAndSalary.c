# include <stdio.h>

int main ()
{
    char name[100];
    float salary;

    printf("name? ");
    scanf("%99s", name);

    printf("salary? ");
    scanf ("%f", &salary);

    printf("your name is %s and you earn %.2f dolars\n", name, salary);

return 0;
}
