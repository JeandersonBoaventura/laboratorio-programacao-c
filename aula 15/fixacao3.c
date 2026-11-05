#include <stdio.h>
#include <stdlib.h>

int main()
{
   int matriz[3][3];
    int contadorPares = 0;

    printf("Digite os valores da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] % 2 == 0) {
                contadorPares++;
            }
        }
    }

    printf("\nQuantidade de valores pares na matriz: %d\n", contadorPares);
    return 0;
}
