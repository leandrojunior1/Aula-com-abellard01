#include <stdio.h>

int main() {
    int idade;

    printf("--- EXERCICIO 17 ---\n");
    printf("Digite a idade do individuo: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Apto para abertura do processo de habilitacao veicular.\n\n");
    } else {
        printf("Restricao legal: Menor de idade.\n\n");
    }

    return 0;
}
