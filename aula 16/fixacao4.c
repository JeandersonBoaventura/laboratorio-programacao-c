#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    printf("escreva seu nome: ");
    scanf("%49s",nome);
    for (int i = 0; nome[i] != '\0'; i++) {
    printf("%c\n", nome[i]);
 }




    return 0;
}
