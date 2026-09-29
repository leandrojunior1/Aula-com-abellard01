#include <stdio.h>
#include <ctype.h>

int main() {
    char palavra[50];
    int vogais = 0, consoantes = 0;
    printf("escreva uma palavra: \n");
    scanf("%49s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
    char c = (palavra[i]);

    if (c >= 'a' && c<= 'z') {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            vogais++;
        } else {
            consoantes++;
        }
        
    }
  }
    printf("Palavra digitada: %s \n", palavra);
    printf("Quantidade de vogais: %d \n", vogais);
    printf("Quantidade de consoantes: %d \n", consoantes);
    
    return 0;
}
