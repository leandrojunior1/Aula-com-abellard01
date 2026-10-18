#include <stdio.h>

int main(void)
{
    int soma = 0;

    printf("Multiplos de 3 e 5 entre 1 e 100: ");
    for (int numero = 1; numero <= 100; numero++)
    {
        if (numero % 3 == 0 && numero % 5 == 0)
        {
            printf("%d ", numero);
            soma += numero;
        }
    }

    printf("\nSoma dos multiplos: %d\n", soma);

    return 0;
}
