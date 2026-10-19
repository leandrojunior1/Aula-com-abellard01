#include <stdio.h>

int main() {
    float base, altura, area, perimetro;

    printf("--- EXERCICIO 13 ---\n");
    printf("Digite a base do terreno retangular: ");
    scanf("%f", &base);
    printf("Digite a altura do terreno retangular: ");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = 2.0 * (base + altura);

    printf("Area superficial total: %.2f metros quadrados\n", area);
    printf("Comprimento do perimetro: %.2f metros\n\n", perimetro);

    return 0;
}
