#include <stdio.h>

int main() {
    char palavra[100];
    int contagem = 0;

    printf("Digite uma palavra [limite de 100 caracteres]: ");
    scanf("%s", &palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        contagem++;
    }

    printf("%d", contagem);
    
    return 0;
}
