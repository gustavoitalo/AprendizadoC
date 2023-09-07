#include <stdio.h>

int main()
{
    int dinheiro, dolar;

    printf ("quanto dinheiro? ");
    scanf ("%d", &dinheiro);
    dolar = dinheiro/3.45;
    printf ("%d da certa de %d dolares\n", dinheiro, dolar);
    

    return 0;
}
