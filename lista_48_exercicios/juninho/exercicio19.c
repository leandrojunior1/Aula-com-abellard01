#include <stdio.h>

int main() {
    float numerador, denominador, quociente;

    printf("--- EXERCICIO 19 ---\n");
    printf("Digite o numerador: ");
    scanf("%f", &numerador);
    printf("Digite o denominador: ");
    scanf("%f", &denominador);

    if (denominador != 0.0) {
        quociente = numerador / denominador;
        printf("Quociente da divisao: %.4f\n\n", quociente);
    } else {
        printf("Erro matematico: Divisao por zero nao permitida!\n\n");
    }

    return 0;
}
