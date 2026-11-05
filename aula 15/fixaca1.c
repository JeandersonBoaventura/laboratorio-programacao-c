#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[2][3];
    int soma = 0;


    printf("Digite os valores para a matriz 2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {

            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("\nA soma de todos os elementos e: %d\n", soma);
    return 0;
}
