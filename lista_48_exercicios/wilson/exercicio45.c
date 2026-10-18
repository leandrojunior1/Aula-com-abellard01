#include <stdio.h>

int main(void) {
    float nota;

    printf("Digite a nota do exame (de 0 a 10): ");
    if (scanf("%f", &nota) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    while (nota < 0.0f || nota > 10.0f) {
        printf("Nota invalida. Digite um valor entre 0 e 10: ");
        if (scanf("%f", &nota) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    printf("Nota valida: %.1f\n", nota);
    return 0;
}
