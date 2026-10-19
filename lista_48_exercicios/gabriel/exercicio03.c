#include <stdio.h>

int main() {
    float latitude = -23.2689;
    float longitude = -47.1623;
    char quadrante = 'S';
    int codigoEstacao = 402;

    printf("=== EXERCICIO 3: MONITORAMENTO ATMOSFERICO ===\n");
    printf("%.4f | %.4f | %c | %d\n\n", latitude, longitude, quadrante, codigoEstacao);

    return 0;
}
