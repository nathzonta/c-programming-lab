#include <stdio.h>
#include <string.h>

int main () {
    char nomeProduto[50], nomeInput[50];
    char categoriaProduto[11];
    char descricaoProduto[50];

    printf("=========== Cadastro de produtos ===========\n");
    
    printf("Nome do Produto: ");
    fgets(nomeInput, sizeof(nomeInput), stdin);
    nomeInput[strcspn(nomeInput, "\n")] = '\0';

    strcpy(nomeProduto, nomeInput);
    
    printf("\nCategoria do Produto: ");
    fgets(categoriaProduto, sizeof(categoriaProduto), stdin);

    printf("\n=========== Resumo ===========\n");

    char descricao[100] = "Produto: ";
    strcat(descricao, nomeProduto);
    printf(descricao);
    printf("\nQuantidade de caracteres: %d\n", strlen(nomeProduto));
    printf("Categoria: %s\n", (strcasecmp(categoriaProduto, "periferico") == 0) ? "Periferico" : "Hardware");
    printf("Descricao: %s", descricao);
    printf("\nCadastro concluido!");

    return 0;
}