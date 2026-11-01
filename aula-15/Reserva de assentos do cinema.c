#include <stdio.h>

int main()
{
    int assentos[3][4] = {
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {0, 1, 1, 1}
    };
    
    int totalDisp = 0, totalIndisp = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if (assentos[i][j] == 0) {
                totalDisp++;
            } else {
                totalIndisp++;
            }
        }
    }

    printf("Total de assentos disponiveis: %d \n", totalDisp);
    printf("Total de assentos indisponiveis: %d", totalIndisp);

    return 0;
}
