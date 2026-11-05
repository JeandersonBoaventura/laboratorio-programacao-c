#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[3][2];

    for (int i = 0; i < 3; i++) {
        printf("--- Aluno %d ---\n", i + 1);
        for (int j = 0; j < 2; j++) {
            printf("Digite a nota da Prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\n--- Medias dos Alunos ---\n");
    for (int i = 0; i < 3; i++) {
        float media = (notas[i][0] + notas[i][1]) / 2.0;
        printf("Media do Aluno %d: %.2f\n", i + 1, media);
    }
    return 0;
}
