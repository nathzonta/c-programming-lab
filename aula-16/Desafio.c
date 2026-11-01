#include <stdio.h>

int main() {
    char palavra[30];
    int contagem = 0;

    printf("Digite uma palavra [limite de 30 caracteres]: ");
    scanf("%29s", &palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        contagem++;
    }

    printf("%d", contagem);
    
    return 0;
}
