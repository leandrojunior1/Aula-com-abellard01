#include <stdio.h>

int main(void) {
    int codigo;
    double preco;
    double totalBruto = 0.0;
    int opcaoPagamento;

    printf("Digite o codigo do item (0 para encerrar): ");
    if (scanf("%d", &codigo) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    while (codigo != 0) {
        if (codigo < 0) {
            printf("O codigo do item deve ser positivo.\n");
            return 1;
        }

        printf("Digite o preco unitario: ");
        if (scanf("%lf", &preco) != 1 || preco < 0.0) {
            printf("Preco invalido.\n");
            return 1;
        }

        totalBruto += preco;

        printf("Digite o codigo do item (0 para encerrar): ");
        if (scanf("%d", &codigo) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    printf("\nTotal bruto: R$ %.2f\n", totalBruto);
    printf("Forma de pagamento (1 - dinheiro, 2 - cartao): ");
    if (scanf("%d", &opcaoPagamento) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    while (opcaoPagamento != 1 && opcaoPagamento != 2) {
        printf("Opcao invalida. Digite 1 para dinheiro ou 2 para cartao: ");
        if (scanf("%d", &opcaoPagamento) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    printf("\n===== EXTRATO DA COMPRA =====\n");
    printf("Total bruto: R$ %.2f\n", totalBruto);

    if (opcaoPagamento == 1) {
        double totalComDesconto = totalBruto * 0.95;
        double valorEntregue;

        printf("Desconto (5%%): R$ %.2f\n", totalBruto * 0.05);
        printf("Total a pagar: R$ %.2f\n", totalComDesconto);
        printf("Valor entregue: R$ ");
        if (scanf("%lf", &valorEntregue) != 1 || valorEntregue < totalComDesconto) {
            printf("Valor entregue invalido ou insuficiente.\n");
            return 1;
        }

        printf("Troco: R$ %.2f\n", valorEntregue - totalComDesconto);
        printf("Pagamento: dinheiro\n");
    } else {
        printf("Desconto: R$ 0.00\n");
        printf("Total a pagar: R$ %.2f\n", totalBruto);
        printf("Pagamento: cartao\n");
    }

    printf("=============================\n");
    return 0;
}
