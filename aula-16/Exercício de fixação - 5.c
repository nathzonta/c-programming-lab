#include <stdio.h>

int main () {
    char palavra[100];
    char vogais[] = "AEIOUaeiou";
    int contagem = 0;
    
    printf("Escreva uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    for (int i = 0; palavra[i] != '\0'; i++) {
        for (int j = 0; vogais[j] != '\0'; j++) {
            if (palavra[i] == vogais[j]) {
                contagem++;
                break;
            }
        }
    }

    printf("%d", contagem);

    return 0;
}