#include <stdio.h>

int main() {
    int agencia = 1420;
    int conta = 89214;
    float valor = 1250.75;
    char canal = 'T';

    printf("=== EXERCICIO 6: COMPROVANTE DE TRANSFERENCIA ===\n\n");
    printf("Agencia Remetente: %d\n\n", agencia);
    printf("Conta Destino: %d\n\n", conta);
    printf("Valor Liquidado: R$ %.2f\n\n", valor);
    printf("Canal de Atendimento: %c\n\n", canal);

    return 0;
}

