#include <stdio.h>

int main() {
    float horasSemanais, valorHora, salarioTotal;

    printf("--- EXERCICIO 24 ---\n");
    printf("Digite a carga horaria semanal executada: ");
    scanf("%f", &horasSemanais);
    printf("Digite a remuneracao por hora padrao: ");
    scanf("%f", &valorHora);

    if (horasSemanais > 40.0) {
        float horasExtras = horasSemanais - 40.0;
        float valorHoraExtra = valorHora * 1.5; 
        salarioTotal = (40.0 * valorHora) + (horasExtras * valorHoraExtra);
        printf("Jornada com horas extras computadas.\n");
    } else {
        salarioTotal = horasSemanais * valorHora;
        printf("Jornada regular computada.\n");
    }

    printf("Salario semanal total apurado: R$ %.2f\n\n", salarioTotal);

    return 0;
}
