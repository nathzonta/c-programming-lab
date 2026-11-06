#include <stdio.h>

int verificarNumero(int a) {
    return a % 2;
}

int main() {
    int numero;

    printf("===== VERIFICADOR DE NUMEROS =====");
    printf("\nDigite o número: ");
    scanf("%d", &numero);
    printf("O número é %s.", (verificarNumero(numero) == 0 ? "par" : "ímpar"));
    
    return 0;
}