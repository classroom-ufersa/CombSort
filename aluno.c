#include <stdio.h>  //Biblioteca para entrada e saída.
#include <stdlib.h> //Biblioteca para alocação dinâmica.
#include <string.h> //Biblioteca para manipulação de strings.
#include "aluno.h"  //Biblioteca criada para as funções desenvolvidas.
#include <unistd.h> //Biblioteca para a função sleep.
#include <ctype.h>  //Biblioteca para a função toupper.

struct aluno
{
    char nome[50];
    char matricula[15];
    char documento[20];
};
// implementação da função cria_Aluno
Aluno *cria_Aluno(Aluno *aluno)
{
    // Alocando a memoria    
    aluno = (Aluno *)malloc(sizeof(Aluno));
    if (aluno == NULL)
    {
        printf("ERRO!\n");
        exit(1);
    }
    // Imprime as seguintes menssagens na tela do usuário.
    // Ler as informações digitadas pelo usuário.
    printf("Informe o nome do aluno: \n");
    scanf(" %[^\n]s", aluno->nome);
    if (strlen(aluno->nome) > 0)
    {
        aluno->nome[0] = toupper(aluno->nome[0]); // Verificando se a primeira letra do nome é maiúscula.
    }
    printf("Informe a matricula do aluno: \n");
    scanf(" %[^\n]s", aluno->matricula);
    printf("Informe o documento do aluno: \n");
    scanf(" %[^\n]s", aluno->documento);

    FILE *aluno_txt;

    aluno_txt = fopen("Alunos.txt", "at");
    // Escreve os dados que o usuário digitou no arquivo.
    fprintf(aluno_txt, "Nome: %s\tMatricula: %s\tDocumento: %s\n", aluno->nome, aluno->matricula, aluno->documento);
    // fecha o arquivo
    fclose(aluno_txt);
    // Imprime as seguintes menssagens na tela do usuário.
    printf("Aluno criado com sucesso! \n");

    sleep(2);
    // Imprime a mensagem que o aluno foi criado, depois de 2 segundos, a tela seá limpa.
    system("cls");
    // Função para limpar a tela.
    free(aluno);
    // Liberando a memória
    return(aluno);
}
// Aplicando o combsort.
void combSort(char lista[][50], int n)
{
    FILE *abrir;
    int lacuna = n;
    int trocado = 1;
    int i, j;
    char temp[50];
    int controle = 0;

    while (lacuna > 1 || trocado == 1)
    { // c5*n
        lacuna = lacuna / 1.3;
        if (lacuna < 1)
        {
            lacuna = 1;
        }

        trocado = 0;
        for (i = 0, j = i + lacuna; j < n; i++, j++)
        { // n*n
            if (strcmp(lista[i], lista[j]) > 0)
            {
                strcpy(temp, lista[i]);
                strcpy(lista[i], lista[j]);
                strcpy(lista[j], temp);
                trocado = 1;
            }
        }
    }

    /*
        pior caso e médio caso:
        O(n²);
        Melhor caso:
        O(n log n);
    */

    abrir = fopen("Alunos.txt", "wt");

    while (controle < n)
    {
        fprintf(abrir, "%s", lista[controle]);
        controle++;
    }

    fclose(abrir);
}

int contador()
{

    FILE *abre;
    char linha[100];
    int numLinhas = 0;

    abre = fopen("Alunos.txt", "rt");
    if (abre == NULL)
    {
        printf("ERRO ao abrir o arquivo!");
        exit(1);
    }

    while (fgets(linha, 100, abre) != NULL)
    {
        numLinhas++;
    }

    fclose(abre);
    // Retorna um ponteiro para ponteiro, para o primeiro índice da matriz.
    return (numLinhas);
}
