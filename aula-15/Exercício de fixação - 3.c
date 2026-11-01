#include <stdio.h>

int main()
{
    int matrix[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 4, 8}
    };
    
    int totalPares = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if (matrix[i][j] % 2 == 0) {
                totalPares++;
            }
        }
    }

    printf("Total dos pares: %d", totalPares);

    return 0;
}
