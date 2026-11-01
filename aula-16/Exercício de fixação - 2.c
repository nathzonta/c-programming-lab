#include <stdio.h>

int main () {
    char nomePessoa[100];

    printf("Digite o seu nome completo [limite de 100 caracteres]: ");
    fgets(nomePessoa, sizeof(nomePessoa), stdin);

    printf("\nNome digitado: %s", nomePessoa);
    
    return 0;
}