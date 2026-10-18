#include <stdio.h>

int main(void) {
    float temperatura;
    float maxima = 0.0f;
    float minima = 0.0f;

    for (int dia = 1; dia <= 7; dia++) {
        printf("Digite a temperatura do dia %d: ", dia);
        if (scanf("%f", &temperatura) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }

        if (dia == 1) {
            maxima = temperatura;
            minima = temperatura;
        } else {
            if (temperatura > maxima) {
                maxima = temperatura;
            }
            if (temperatura < minima) {
                minima = temperatura;
            }
        }
    }

    printf("Temperatura maxima da semana: %.1f\n", maxima);
    printf("Temperatura minima da semana: %.1f\n", minima);

    return 0;
}
