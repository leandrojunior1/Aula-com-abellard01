#include <stdio.h>

int main(void)
{
    int numero;
    int quantidade = 0;
    long long soma = 0;

    printf("Digite um numero inteiro (0 para encerrar): ");
    if (scanf("%d", &numero) != 1)
    {
        printf("Entrada invalida.\n");
        return 1;
    }

    while (numero != 0)
    {
        soma += numero;
        quantidade++;

        printf("Digite outro numero inteiro (0 para encerrar): ");
        if (scanf("%d", &numero) != 1)
        {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    printf("Quantidade de numeros computados: %d\n", quantidade);
    printf("Somatorio: %lld\n", soma);

    return 0;
}
