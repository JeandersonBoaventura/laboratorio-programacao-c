#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char nome[50];
    char codigoCurso[10];
    char nomeCopia[50];
    char nomeCurso[30];
    char mensagem[50] = "Ola, ";
    int tamanhoNome;


    printf("===== IDENTIFICACAO ACADEMICA =====\n\n");
    printf("Nome do estudante: ");
    scanf("%s", nome);
    printf("Codigo do curso (CC ou SI): ");
    scanf("%s", codigoCurso);
    if (strcmp(codigoCurso, "CC") == 0) {
        strcpy(nomeCurso, "Ciencia da Computacao");
    } else if (strcmp(codigoCurso, "SI") == 0) {
        strcpy(nomeCurso, "Sistemas de Informacao");
    } else {
        strcpy(nomeCurso, "Curso Desconhecido");
    }
    tamanhoNome = strlen(nome);
    strcpy(nomeCopia, nome);
    strcat(mensagem, nomeCopia);
    strcat(mensagem, "!");


    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s\n", nomeCopia);
    printf("Curso: %s\n", nomeCurso);
    printf("Caracteres no nome: %d\n\n", tamanhoNome);

    printf("%s\n", mensagem);
    return 0;
}
