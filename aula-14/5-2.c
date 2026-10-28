#include <stdio.h>

int main() {
    int numeros[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite um valor para armazenar na matriz: ");
            scanf("%d", &numeros[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", numeros[i][j]);    
        }
        printf("\n");
    }
}
