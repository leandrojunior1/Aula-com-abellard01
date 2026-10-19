#include <stdio.h>

int main() {
    int horasTrabalhadas;
    float valorHora, salarioBruto, previdencia, impostoRenda, salarioLiquido;

    printf("--- EXERCICIO 11 ---\n");
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);
    printf("Digite o valor recebido por hora: ");
    scanf("%f", &valorHora);

    salarioBruto = horasTrabalhadas * valorHora;
    previdencia = salarioBruto * 0.11;
    impostoRenda = salarioBruto * 0.05;
    salarioLiquido = salarioBruto - previdencia - impostoRenda;

    printf("Salario Bruto: R$ %.2f\n", salarioBruto);
    printf("Desconto Previdencia (11%%): R$ %.2f\n", previdencia);
    printf("Desconto Imposto de Renda (5%%): R$ %.2f\n", impostoRenda);
    printf("Salario Liquido: R$ %.2f\n\n", salarioLiquido);

    return 0;
}
