#include <stdio.h>

float maiorPreco(float preco1, float preco2) {    
    if (preco1 > preco2) {
        return preco1;
    } else if (preco1 < preco2) {
        return preco2;
    }
}

int main() {
    float preco1, preco2;

    printf("===== Comparador de precos =====");
    printf("\nDigite o primeiro preco: ");
    scanf("%d", &preco1);
    printf("\nDigite o segundo preco: ");
    scanf("%d", &preco2);

    if (preco1 != preco2) {
        printf("\nMaior preco: %d", maiorPreco(preco1, preco2));
        return 0;
    }
    
    printf("Ambos os precos sao iguais.");
    
    return 0;
}