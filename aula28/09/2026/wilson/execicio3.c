
#include <stdio.h>

int main () {
    float nota1, nota2, media;

    int aprovados = 0, exame = 0, reprovados = 0;

    for (int i = 1; i<= 10; i++) {
        printf("Aluno %d \n", i);
        printf("digite a sua primeira nota: ");
        scanf("%f", &nota1);
        printf("digite a segunda nota: \n");
        scanf("%f", &nota2);

        media = (nota1 + nota2) /2.0;

        if (media >= 7.0) {
            aprovados++;
        } else if (media >= 5.0) {
            exame++;
        } else {
            reprovados++;
        }
    }
    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    printf("emExame: %d\n", exame);

    return 0;
}