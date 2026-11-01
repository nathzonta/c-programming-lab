#include <stdio.h>
#include <string.h>

int main () {
    char primeiroNome[20], nomeInput[20];
    char perfilAcesso[6];

    printf("=========== Cadastro de usuarios ===========\n");
    
    printf("Digite seu primeiro nome: ");
    scanf("%29s", nomeInput);

    strcpy(primeiroNome, nomeInput);

    printf("\nDigite seu perfil (ADMIN ou COMUM): ");
    scanf("%5s", perfilAcesso);

    printf("\n=========== Dados Cadastrados ===========\n");

    printf("Nome: %s\n", primeiroNome);
    printf("Quantidade de caracteres: %d\n", strlen(primeiroNome));
    printf("Perfil: %s\n", (strcasecmp(perfilAcesso, "ADMIN") == 0) ? "Administrador" : "Comum");

    char output[50] = "\nBem vindo(a), ";
    strcat(output, primeiroNome);
    printf("%s", output);
    printf("\nCadastro realizado com sucesso.");

    return 0;
}