#include <stdio.h>
#include "aluno.c"

int main(){

    int opc;
    Aluno * alunos;
    FILE* teste;
    char nomes[20][50];
    int qnt_linhas;


    while (opc != 2) {



        printf("Digite 1 para criar um aluno, e 2 para fechar o programa: \n");
        scanf("%d", &opc);

        if (opc == 1) {
            cria_Aluno(alunos);

        }

    }

    qnt_linhas = contador();

    int i = 0;

    teste = fopen("Alunos.txt", "rt");

    while(i < qnt_linhas) {
        fgets(nomes[i], 50, teste);
        i++;
    }

    combSort(nomes, qnt_linhas);



    fclose(teste);

    return 0;
}