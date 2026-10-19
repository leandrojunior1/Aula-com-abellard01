#include <stdio.h>

int main() {
    int a, b;
    printf("--- EXERCICIO 9 ---\n");
    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    printf("Divisao inteira (quociente): %d\n", a / b);
    printf("Resto da divisao (modulo): %d\n\n", a % b);

    return 0;
}
