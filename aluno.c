#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno
{
    char nome[50];
    int matricula;
    char documento;
}Aluno;

Aluno * cria_Aluno()
{
    Aluno * aluno = (Aluno*) malloc(sizeof(Aluno));
    if (aluno == NULL)
    {
        printf("A culpa é de vlad!\n");
        exit(1);
    }
    printf("Informe o nome do aluno: \n");
    scanf(" %[^\n]s", aluno->nome);
    printf("Informe a matricula do aluno: \n");
    scanf("%d\n", aluno->matricula);
    printf("Informe o documento do aluno: \n");
    scanf(" %[^\n]s", aluno->documento);
}
