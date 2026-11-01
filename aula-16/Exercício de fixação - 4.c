#include <stdio.h>

int main () {
    char palavra[30];
    
    printf("Escreva uma palavra: ");
    scanf("%29s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        printf("%c ", palavra[i]);
    }

    return 0;
}