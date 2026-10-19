#include <stdio.h>

int main() {
    int saldoEstoque;

    printf("--- EXERCICIO 23 ---\n");
    printf("Digite o saldo fisico atual do insumo: ");
    scanf("%d", &saldoEstoque);

    if (saldoEstoque < 50) {
        printf("ALERTA: Necessidade urgente de reposicao de suprimentos! (Estoque abaixo de 50 unidades)\n\n");
    } else {
        printf("Estabilidade do armazem atestada. Estoque seguro.\n\n");
    }

    return 0;
}
