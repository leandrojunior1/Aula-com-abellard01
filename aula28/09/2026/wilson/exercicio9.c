#include <stdio.h> 

int main() {
    int n;
    int t1 = 0, t2 =1, proximo;

    printf("Digite a quantidade de termos (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um numero maior que 0. \n");
        return 1;
    }

    printf("\n Sequencia de Fibonacci com %d termos(s): \n", n);

    for ( int i = 1; i <= n; i++) {
        if (i == 1){
            printf("%d", t1);
        } else if (i == 2) {
            printf(", %d", t2);
        } else {
            proximo = t1 + t2;
            printf(", %d", proximo);
            t1 = t2;
            t2 = proximo;
        }
    }
    printf("\n");
    return 0;
}