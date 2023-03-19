#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

struct aluno
{
    char nome[50];
    int matricula;
    char documento;
};

Aluno * cria_Aluno()
{
    Aluno * aluno = (Aluno) malloc(sizeof(Aluno));
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

void combsort(char vetor[], int n)
{
    int gap = n;
    int busca = 1;

    char aux;

    while (gap > 1 || busca == 1)
    {
        if (gap > 1)
        {
            gap /= 1.3;
        }
        int i = 0;
        busca = 0;
        while (i + gap< n)
        {
            if (strcmp(vetor[i], vetor[i+gap]) > 0)
            {
                aux = vetor[i];
                vetor[i] = vetor[i+gap];
                vetor[i+gap] = aux;
                busca = 1;
            }

        }

    }

}