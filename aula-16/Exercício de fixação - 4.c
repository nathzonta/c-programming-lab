#include <stdio.h>

int main () {
    char palavra[100];
    
    printf("Escreva uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    for (int i = 0; palavra[i] != '\0'; i++) {
        printf("%c ", palavra[i]);
    }

    return 0;
}