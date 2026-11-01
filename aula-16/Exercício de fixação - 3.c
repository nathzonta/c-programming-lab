#include <stdio.h>

int main () {
    char palavra[30];

    printf("Escreva uma palavra: ");
    scanf("%29s", palavra);
    printf("O primeiro caractere dessa palavra e: %c", palavra[0]);

    return 0;
}