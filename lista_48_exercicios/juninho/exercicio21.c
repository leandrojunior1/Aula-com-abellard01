#include <stdio.h>

int main() {
    float valorBruto, valorLiquido;

    printf("--- EXERCICIO 21 ---\n");
    printf("Digite o valor total do carrinho de compras: R$ ");
    scanf("%f", &valorBruto);

    if (valorBruto > 250.00) {
        valorLiquido = valorBruto - (valorBruto * 0.10);
        printf("Desconto aplicado de 10%%!\n");
    } else {
        valorLiquido = valorBruto;
        printf("Valor abaixo do limiar promocional.\n");
    }

    printf("Valor liquido final a ser pago: R$ %.2f\n\n", valorLiquido);

    return 0;
}
