#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "aluno.h"

struct aluno
{
    char nome[50];
    int matricula;
    char documento[20];
};

/*void comb_sort(char vetor[], int n)
{
    int gap = n;
    int busca = 1;
    FILE* testar;
    char linha[100];
    char aux[50];

    testar = fopen("Alunos.txt", "at");
    if(testar == NULL) {
        printf("ERRO no COMB!");
        exit(1);
    }

    while (gap > 1 || busca == 1) {
        if (gap > 1)
        {
            gap /= 1.3;
        }
        int i = 0;
        busca = 0;
        while (i + gap < n) {
            while(fgets(linha, 100, testar) != NULL){
                sscanf(linha, "%s", vetor[i]);
                if (strcmp(vetor[i], vetor[i + gap]) > 0) {
                    aux[50] = vetor[i];
                    vetor[i] = vetor[i + gap];
                    vetor[i + gap] = aux;
                    busca = 1;
                }
            }
        }
    }
}*/

void combSort(char lista[][50], int n) {
    int lacuna = n;
    int trocado = 1;
    int i, j;
    char temp[50];

    while (lacuna > 1 || trocado == 1) {
        lacuna = lacuna / 1.3;
        if (lacuna < 1) {
            lacuna = 1;
        }

        trocado = 0;
        for (i = 0, j = i + lacuna; j < n; i++, j++) {
            if (strcmp(lista[i], lista[j]) > 0) {
                strcpy(temp, lista[i]);
                strcpy(lista[i], lista[j]);
                strcpy(lista[j], temp);
                trocado = 1;
            }
        }
    }
}

Aluno *cria_Aluno(Aluno *aluno)
{
    aluno = (Aluno *)malloc(sizeof(Aluno));
    if (aluno == NULL)
    {
        printf("ERRO!\n");
        exit(1);
    }
    printf("Informe o nome do aluno: \n");
    scanf(" %[^\n]s", aluno->nome);
    /*printf("Informe a matricula do aluno: \n");
    scanf("%d", &aluno->matricula);
    printf("Informe o documento do aluno: \n");
    scanf(" %[^\n]s", aluno->documento);*/

    FILE *aluno_txt;

    if (access("Alunos.txt", F_OK) == 0)
    {

        aluno_txt = fopen("Alunos.txt", "at");

        fprintf(aluno_txt, "%s\n", aluno->nome /*,aluno->matricula, aluno->documento*/);

        fclose(aluno_txt);

        printf("Aluno criado com sucesso! \n");
    }

    else
    {

        aluno_txt = fopen("Alunos.txt", "wt");

        fprintf(aluno_txt, "%s\n", aluno->nome/*, aluno->matricula, aluno->documento*/);

        fclose(aluno_txt);

        printf("Aluno criado com sucesso! \n");
    }

    return (aluno);
}

int contador() {

    FILE* abre;
    char linha[100];
    int numLinhas = 0;

    abre = fopen("Alunos.txt", "rt");
    if(abre == NULL) {
        printf("ERRO ao abrir o arquivo!");
        exit(1);
    }

    while(fgets(linha, 100, abre) != NULL) {
        numLinhas++;
    }

    fclose(abre);

    return(numLinhas);
}



/*char recebe_nomes()
{
    char linha[100];
    int i = 0;
    FILE* aluno_txt;
    char nomes[50];

    aluno_txt = fopen("Alunos.txt", "rt");

    if (aluno_txt == NULL)
    {
        printf("\nERRO!");
        exit(1);
    }


    while  fgets(linha, 100, aluno_txt);
    //{
        sscanf(linha, " %[^\n]s", &nomes[50]);
        //i++;
   // }

    fclose(aluno_txt);

    return(nomes[0]);
}*/