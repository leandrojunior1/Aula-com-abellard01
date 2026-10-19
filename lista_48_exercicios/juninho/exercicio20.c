#include <stdio.h>

int main() {
    float n1, n2;

    printf("--- EXERCICIO 20 ---\n");
    printf("Digite o primeiro numero real: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero real: ");
    scanf("%f", &n2);

    if (n1 > n2) {
        printf("O primeiro numero (%.2f) e maior que o segundo (%.2f).\n\n", n1, n2);
    } else if (n2 > n1) {
        printf("O segundo numero (%.2f) e maior que o primeiro (%.2f).\n\n", n2, n1);
    } else {
        printf("Os dois numeros sao iguais.\n\n");
    }

    return 0;
}
