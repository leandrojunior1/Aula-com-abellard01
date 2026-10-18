#include <stdio.h>

int main(void) {
    int n;
    int bissecoes = 0;

    printf("Digite um numero inteiro maior que 1: ");
    if (scanf("%d", &n) != 1 || n <= 1) {
        printf("Entrada invalida. O numero deve ser maior que 1.\n");
        return 1;
    }

    while (n > 1) {
        n = n / 2;
        bissecoes++;
    }

    printf("Quantidade de bissecoes: %d\n", bissecoes);

    return 0;
}
