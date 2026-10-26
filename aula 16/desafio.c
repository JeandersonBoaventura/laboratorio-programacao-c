#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int valor=0;
    printf("escreva seu nome: ");
    scanf("%49s",nome);
    for (int i = 0; nome[i] != '\0'; i++) {
    valor ++;
 }
 printf("%d", valor);

    return 0;
}
