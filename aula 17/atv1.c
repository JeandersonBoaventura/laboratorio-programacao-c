#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char nome[50];
    char perfilInput[20];
    char nomeConfirmacao[50];
    char perfilDescricao[30];
    char mensagemFinal[100] = "Bem-vindo(a), ";
    int tamanhoNome;


    printf("===== CADASTRO DE USUARIOS =====\n\n");
    printf("Digite seu nome: ");
    scanf("%s", nome);


    printf("Digite seu perfil: ");
    scanf("%s", perfilInput);


    tamanhoNome = strlen(nome);


    if (strcmp(perfilInput, "ADMIN") == 0) {
        strcpy(perfilDescricao, "Administrador");
    } else {
        strcpy(perfilDescricao, "Comum");
    }

    strcpy(nomeConfirmacao, nome);

    strcat(mensagemFinal, nomeConfirmacao);
    strcat(mensagemFinal, "!\nCadastro realizado com sucesso.");

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", nomeConfirmacao);
    printf("Quantidade de caracteres: %d\n", tamanhoNome);
    printf("Perfil: %s\n\n", perfilDescricao);

    printf("%s\n", mensagemFinal);

    return 0;
}
