#include <stdio.h>

int main() {
    int totalSegundos, horas, minutos, segundos;

    printf("--- EXERCICIO 16 ---\n");
    printf("Digite o intervalo de tempo em segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("Tempo formatado: %02d:%02d:%02d\n\n", horas, minutos, segundos);

    return 0;
}
