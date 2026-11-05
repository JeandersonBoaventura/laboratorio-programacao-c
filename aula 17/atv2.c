#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char produto[50];
    char categoriaInput[30];
    char produtoCopia[50];
    char categoriaDescricao[30];
    char descricaoFinal[100] = "Produto: ";
    int tamanhoNome;


    printf("===== CADASTRO DE PRODUTOS =====\n\n");
    printf("Nome do produto: ");
    scanf("%s", produto);
    printf("Categoria: ");
    scanf("%s", categoriaInput);

    tamanhoNome = strlen(produto);

    if (strcmp(categoriaInput, "HARDWARE") == 0) {
        strcpy(categoriaDescricao, "Hardware");
    } else if (strcmp(categoriaInput, "PERIFERICO") == 0) {
        strcpy(categoriaDescricao, "Periferico");
    } else {
        strcpy(categoriaDescricao, categoriaInput);
    }

    strcpy(produtoCopia, produto);
    strcat(descricaoFinal, produtoCopia);


    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", produtoCopia);
    printf("Caracteres: %d\n", tamanhoNome);
    printf("Categoria: %s\n\n", categoriaDescricao);
    printf("Descricao: %s\n", descricaoFinal);
    printf("Cadastro concluido!\n");
    return 0;
}
