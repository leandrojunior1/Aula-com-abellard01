#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float peso;
    char genero;

    printf("--- EXERCICIO 14 ---\n");
    printf("Digite o primeiro nome: ");
    scanf("%49s", nome);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite o genero (M/F): ");
    scanf(" %c", &genero); // Espaço antes de %c limpa o buffer

    printf("\n=== DADOS CAPTURADOS ===\n");
    printf("Nome: %s\nIdade: %d anos\nPeso: %.2f kg\nGenero: %c\n\n", nome, idade, peso, genero);

    return 0;
}
