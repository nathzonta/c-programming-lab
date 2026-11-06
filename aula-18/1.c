#include <stdio.h>

int soma(int a, int b) {;
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

int divisao(int a, int b) {
    return a / b;
}

int exibirMenu() {
    printf("======= Calculadora =======\n");
    printf("Selecione a operação desejada: \n1. Soma\n2. Subtração\n3. Multiplicação\n4. Divisão\n");
    printf("===========================\n");
}

int main() {
    int numero1, numero2, escolhaOp;

    //Printar menu
    exibirMenu();

    //Escolher operação
    printf("Escolha uma operação: ");
    scanf("%d", &escolhaOp);

    if (escolhaOp < 1 || escolhaOp > 4) {
        printf("Escolha inválida.");
        return 1;
    }

    //Pegando os números
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    switch (escolhaOp) {
        case 1:
            printf("Resultado: %d", soma(numero1, numero2));
            break;
        case 2:
            printf("Resultado: %d", subtracao(numero1, numero2));
            break;
        case 3:
            printf("Resultado: %d", multiplicacao(numero1, numero2));
            break;
        case 4:
            printf("Resultado: %d", divisao(numero1, numero2));
            break;
    }
    
    return 0;
}