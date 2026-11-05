#include <stdio.h>
#include <stdlib.h>

int main()
{
   int matriz[2][2];
    printf("Digite 4 numeros inteiros:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {

            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n--- Matriz Digitada ---\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
