#include <stdio.h>

int duplicar(int a) {
    return a * 2;
}

int main() {
    int numero;

    printf("===== CONTROLE DE ESTOQUE =====");
    printf("\nQuantidade inicial: ");
    scanf("%d", &numero);
    printf("Quantidade apos duplicar: %d.", duplicar(numero));
    
    return 0;
}