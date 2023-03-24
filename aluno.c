#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "aluno.h"

struct aluno
{
    char nome[50];
    char matricula[15];
    char documento[20];
};

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
    printf("Informe a matricula do aluno: \n");
    scanf(" %[^\n]s", aluno->matricula);
    printf("Informe o documento do aluno: \n");
    scanf(" %[^\n]s", aluno->documento);

    FILE *aluno_txt;

    aluno_txt = fopen("Alunos.txt", "at");

    fprintf(aluno_txt, "Nome: %s\tMatricula: %s\tDocumento: %s\n", aluno->nome, aluno->matricula, aluno->documento);

    fclose(aluno_txt);  

    printf("Aluno criado com sucesso! \n");

    return (aluno);
}

void combSort(char lista[][50], int n) {
    FILE* abrir;
    int lacuna = n;
    int trocado = 1;
    int i, j;
    char temp[50];
    int controle = 0;

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



    abrir = fopen("Alunos.txt", "wt");

    while(controle < n) {
        fprintf(abrir, "%s", lista[controle]);
        controle++;
    }

    fclose(abrir);
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