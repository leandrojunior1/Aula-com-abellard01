#include <stdio.h>

int main() {
    int requisicoes = 15420;
    float usoMemoria = 68.45;
    char estado = 'A';
    char protocolo[] = "HTTPS";

    printf("=== EXERCICIO 4: PAINEL DE DIAGNOSTICO ===\n");
    printf("Requisicoes: %d | Memoria: %.2f%% | Estado: %c | Protocolo: %s\n\n", 
           requisicoes, usoMemoria, estado, protocolo);

    return 0;
}
