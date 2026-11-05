#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[2][2] = {
        {10, 20},
        {30, 40}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\n", matriz[i][j]);
        }
    }
    return 0;
}
