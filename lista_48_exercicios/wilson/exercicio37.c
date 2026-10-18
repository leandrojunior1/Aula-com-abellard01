#include <stdio.h>

int main(void) {
    int n;
    unsigned long long fatorial = 1;

    printf("Digite um numero inteiro nao negativo: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Entrada invalida. O numero deve ser nao negativo.\n");
        return 1;
    }

    for (int fator = n; fator >= 1; fator--) {
        fatorial *= (unsigned long long) fator;
    }

    printf("%d! = %llu\n", n, fatorial);

    return 0;
}
