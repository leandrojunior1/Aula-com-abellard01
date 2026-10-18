#include <stdio.h>

int main(void)
{
    int quantidade;
    double somaMedias = 0.0;

    printf("Digite a quantidade de alunos: ");
    if (scanf("%d", &quantidade) != 1 || quantidade <= 0)
    {
        printf("A quantidade deve ser um inteiro positivo.\n");
        return 1;
    }

    for (int aluno = 1; aluno <= quantidade; aluno++)
    {
        double nota1;
        double nota2;
        double media;

        printf("Digite as duas notas do aluno %d: ", aluno);
        if (scanf("%lf %lf", &nota1, &nota2) != 2)
        {
            printf("Entrada invalida.\n");
            return 1;
        }

        media = (nota1 + nota2) / 2.0;
        somaMedias += media;

        printf("Media do aluno %d: %.2f - %s\n",
               aluno, media, media >= 6.0 ? "Aprovado" : "Reprovado");
    }

    printf("Media da classe: %.2f\n", somaMedias / quantidade);

    return 0;
}
