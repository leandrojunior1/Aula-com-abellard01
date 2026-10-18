#include <stdio.h>

int main(void)
{
    int idade;
    int quantidade = 0;
    int maiorIdade = 0;
    double salario;
    double somaSalarios = 0.0;

    printf("Digite a idade (negativa para encerrar): ");
    if (scanf("%d", &idade) != 1)
    {
        printf("Entrada invalida.\n");
        return 1;
    }

    while (idade >= 0)
    {
        printf("Digite o salario mensal: ");
        if (scanf("%lf", &salario) != 1 || salario < 0.0)
        {
            printf("Salario invalido.\n");
            return 1;
        }

        quantidade++;
        somaSalarios += salario;
        if (quantidade == 1 || idade > maiorIdade)
        {
            maiorIdade = idade;
        }

        printf("Digite a idade (negativa para encerrar): ");
        if (scanf("%d", &idade) != 1)
        {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    printf("Quantidade de cidadaos entrevistados: %d\n", quantidade);
    if (quantidade > 0)
    {
        printf("Media salarial: %.2f\n", somaSalarios / quantidade);
        printf("Maior idade encontrada: %d\n", maiorIdade);
    }
    else
    {
        printf("Nenhum cidadao foi entrevistado; media salarial e maior idade indisponiveis.\n");
    }

    return 0;
}
