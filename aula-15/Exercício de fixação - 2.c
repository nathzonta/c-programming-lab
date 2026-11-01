#include <stdio.h>

int main()
{
    float notas_alunos[3][2] = {
        {8.0f, 5.0f},
        {2.0f, 5.0f},
        {5.0f, 5.0f}
    };
    
    for(int i = 0; i < 3; i++) {
        float somaNotas = 0;
        
        for(int j = 0; j < 2; j++) {
            somaNotas += notas_alunos[i][j];
        }
        
        printf("Media do Aluno %d: %.1f \n", i, (somaNotas/2));
    }
    
    return 0;
}
