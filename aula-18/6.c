#include <stdio.h>

int calcularFatorial(int a) {
    if (a == 0) {
      return 1;
    }
    for (int i = a - 1; i > 0; i--) {
        a = a * i;
    }
    return a;
}

int main() {
    int numero;

    printf("===== CALCULADORA DE FATORIAL =====\n");
    printf("Digite um número de 0 a 12: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 12) {
        printf("Número inválido.");
        return 2;
    }

    printf("Resultado: %d", calcularFatorial(numero));
        
    return 0;
}