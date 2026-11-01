#include <stdio.h>
#include <string.h>

int main () {
    char primeiroNome[30], nomeInput[30];
    char codigoCurso[3];

    printf("=========== Identificacao Academica ===========\n");
    
    printf("Nome do estudante: ");
    scanf("%29s", nomeInput);

    strcpy(primeiroNome, nomeInput);

    printf("\nCodigo do seu curso (CC ou SI): ");
    scanf("%2s", codigoCurso);

    printf("\n=========== Resultado ===========\n");

    printf("Nome: %s\n", primeiroNome);
    printf("Quantidade de caracteres: %d\n", strlen(primeiroNome));
    printf("Curso: %s\n", (strcasecmp(codigoCurso, "cc") == 0) ? "Ciencia da Computacao" : "Sistemas de Informacao");

    char output[50] = "\nOla, ";
    strcat(output, primeiroNome);
    printf("%s!", output);

    return 0;
}