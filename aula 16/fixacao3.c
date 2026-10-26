#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    printf("escreva seu nome: ");
    scanf("%49s",nome);
    printf("a primeira letra do seu nome e: %c\n", nome[0]);


    return 0;
}
