#include <stdio.h>

int main(void) {
    double populacaoA = 80000.0;
    double populacaoB = 100000.0;
    int anos = 0;

    while (populacaoA <= populacaoB) {
        populacaoA *= 1.03;
        populacaoB *= 1.015;
        anos++;
    }

    printf("Anos necessarios: %d\n", anos);
    printf("Populacao final do pais A: %.2f\n", populacaoA);
    printf("Populacao final do pais B: %.2f\n", populacaoB);

    return 0;
}
