#include <stdio.h>
#include <stdlib.h>

int main()
{
int matriz[3][3];
    int maior;


    printf("Digite os valores da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            if (i == 0 && j == 0) {
                maior = matriz[i][j];
            } else if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("\nO maior valor armazenado na matriz e: %d\n", maior);
    return 0;
}
