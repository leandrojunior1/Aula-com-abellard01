#include <stdio.h>

int main() {
    char nomeCircuito[] = "Microcontrolador ARM Cortex";
    float tensao = 3.3;
    int lote = 20261018;
    char eficiencia = 'A';

    printf("=== EXERCICIO 7: FICHA TECNICA DE CATALOGO ===\n");
    printf("Circuito: %s\n", nomeCircuito);
    printf("Tensao Nominal: %.1f V\n", tensao);
    printf("Lote de Fabricacao: %d\n", lote);
    printf("Classe Energetica: %c\n\n", eficiencia);

    return 0;
}
