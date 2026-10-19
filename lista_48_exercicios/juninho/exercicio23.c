#include <stdio.h>

int main() {
    int numero;

    printf("--- EXERCICIO 22 ---\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O numero e POSITIVO.\n\n");
    } else if (numero < 0) {
        printf("O numero e NEGATIVO.\n\n");
    } else {
        printf("O numero e EXATAMENTE NULO (zero).\n\n");
    }

    return 0;
}
