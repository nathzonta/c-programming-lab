#include <stdio.h>

int main () {
    char palavra[100];

    printf("Escreva uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    printf("O primeiro caractere dessa palavra e: %c", palavra[0]);

    return 0;
}