//2
#include <stdio.h>

int main() {
    int N;
    int i;
    float numero;
    float soma = 0;
    float maior, menor;
    
    printf("Quantos numeros voce quer digitar? ");
    scanf("%d", &N);
    

    if (N <= 0) {
        printf("A quantidade deve ser maior que zero.\n");
        return 0;
    }

    for (i = 0; i < N; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numero);

        if (i == 0) {
            maior = numero;
            menor = numero;
        } else {
          
            if (numero > maior) {
                maior = numero;
            }
      
            if (numero < menor) {
                menor = numero;
            }
        }
        
    
        soma += numero;
    }
    

    printf("\n--- Resultados ---\n");
    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Media: %.2f\n", soma / N);
    
    return 0;
}
//5
#include <stdio.h>

int main() {
    int num, continuar;
    
    do {
        printf("Qual tabuada deseja visualizar? ");
        scanf("%d", &num);

        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }

        printf("Deseja ver outra tabuada? (1-Sim / 2-Não): ");
        scanf("%d", &continuar);
    } while (continuar == 1);
    
    return 0;   
}
//8
#include <stdio.h>

int main() {
    int opcao;
    float a = 0, b = 0;
    
    do {
        printf("\n=== CALCULADORA ===\n");
        printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois números: ");
            scanf("%f %f", &a, &b);
        }
        
        switch (opcao) {
            case 1: printf("Resultado: %.2f\n", a + b); break;
            case 2: printf("Resultado: %.2f\n", a - b); break;
            case 3: printf("Resultado: %.2f\n", a * b); break;
            case 4: 
                if (b != 0) printf("Resultado: %.2f\n", a / b);
                else printf("Erro: Divisão por zero!\n");
                break;
            case 5: printf("Encerrando a calculadora...\n"); break;
            default: printf("Opção inválida!\n");
        }
    } while (opcao != 5);
    
    return 0;
}
