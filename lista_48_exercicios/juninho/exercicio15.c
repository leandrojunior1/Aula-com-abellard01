#include <stdio.h>

int main() {
    float n1, n2, n3, mediaPonderada;

    printf("--- EXERCICIO 15 ---\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    mediaPonderada = ((n1 * 2.0) + (n2 * 3.0) + (n3 * 5.0)) / 10.0;
    printf("Media Ponderada Final: %.2f\n\n", mediaPonderada);

    return 0;
}
