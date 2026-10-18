#include <stdio.h>

int main(void) {
    int primeiroTermo;
    int razao;
    int quantidade;

    printf("Digite o primeiro termo: ");
    if (scanf("%d", &primeiroTermo) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Digite a razao: ");
    if (scanf("%d", &razao) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Digite a quantidade de termos: ");
    if (scanf("%d", &quantidade) != 1 || quantidade <= 0) {
        printf("A quantidade deve ser um inteiro positivo.\n");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        int termo = primeiroTermo + i * razao;
        printf("%d", termo);
        if (i < quantidade - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
