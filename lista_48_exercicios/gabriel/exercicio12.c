#include <stdio.h>

int main() {
    float distancia, combustivel, precoLitro, rendimento, custoPorKm;
    printf("--- EXERCICIO 12 ---\n");
    printf("Digite a distancia total percorrida (km): ");
    scanf("%f", &distancia);
    printf("Digite o total de combustivel consumido (litros): ");
    scanf("%f", &combustivel);
    printf("Digite o preco do litro do combustivel (R$): ");
    scanf("%f", &precoLitro);

    rendimento = distancia / combustivel;
    custoPorKm = (combustivel * precoLitro) / distancia;

    printf("Rendimento operacional: %.2f km/l\n", rendimento);
    printf("Custo medio por quilometro: R$ %.2f/km\n\n", custoPorKm);

    return 0;
}
