#include <stdio.h>
#include <stdbool.h>

int main()
{
// animado pra começar a aprender c.

    const int IDADE = 18;
    const int OUTRAIDADE = 13;
    float num = (float) (IDADE + OUTRAIDADE)/2;

    bool euSouLindo = true;

    printf ("Eu tenho %i anos e a soma é %.1f\n", IDADE, num);
    printf ("%d", euSouLindo);
    return 0;
}
