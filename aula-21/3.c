#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main() {
    Funcionario f;
    FILE *arquivo;

    arquivo = fopen("funcionarios.txt", "a");

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome: ");
        scanf("%s", f.nome);

        printf("Digite o salario: ");
        scanf("%f", &f.salario);

        printf("Digite as horas extras: ");
        scanf("%d", &f.horasExtras);

        fprintf(arquivo, "%s %.2f %d\n", f.nome, f.salario, f.horasExtras);
    }

    fclose(arquivo);

    arquivo = fopen("funcionarios.txt", "r");

    printf("\nFuncionarios cadastrados:\n");

    while (fscanf(arquivo, "%s %f %d", f.nome, &f.salario, &f.horasExtras) != EOF) {
        printf("\nNome: %s\n", f.nome);
        printf("Salario: %.2f\n", f.salario);
        printf("Horas extras: %d\n", f.horasExtras);
    }

    fclose(arquivo);

    return 0;
}