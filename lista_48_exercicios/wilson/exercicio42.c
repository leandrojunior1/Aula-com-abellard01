#include <stdio.h>

int main(void) {
    int opcao = -1;
    double numero1;
    double numero2;

    while (opcao != 0) {
        printf("\nMenu de operacoes\n");
        printf("1 - Soma\n");
        printf("2 - Multiplicacao\n");
        printf("0 - Encerrar\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }

        if (opcao == 1 || opcao == 2) {
            printf("Digite dois numeros reais: ");
            if (scanf("%lf %lf", &numero1, &numero2) != 2) {
                printf("Entrada invalida.\n");
                return 1;
            }

            if (opcao == 1) {
                printf("Resultado da soma: %.2f\n", numero1 + numero2);
            } else {
                printf("Resultado da multiplicacao: %.2f\n", numero1 * numero2);
            }
        } else if (opcao != 0) {
            printf("Opcao inexistente. Tente novamente.\n");
        }
    }

    printf("Sistema encerrado.\n");
    return 0;
}
