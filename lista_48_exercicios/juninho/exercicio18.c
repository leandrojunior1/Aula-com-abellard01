#include <stdio.h>

int main() {
    int numero;

    printf("--- EXERCICIO 18 ---\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero %d e PAR.\n\n", numero);
    } else {
        printf("O numero %d e IMPAR.\n\n", numero);
    }

    return 0;
}
