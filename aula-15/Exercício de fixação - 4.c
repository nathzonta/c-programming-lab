#include <stdio.h>

int main()
{
    int matrix[3][3] = {
        {0, 1, 2},
        {3, 2, 8},
        {4, 7, 9}
    };
    
    int maiorValor = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if (matrix[i][j] > maiorValor) {
                maiorValor = matrix[i][j];
            }
        }
    }

    printf("Maior valor da matriz: %d", maiorValor);

    return 0;
}
