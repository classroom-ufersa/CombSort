#include <stdio.h>
#include "aluno.c"

int main(){
// declaração das variaveis e criação dos ponteiros
    int opc;
    Aluno * alunos;
    FILE* teste;
    char nomes[20][50];
    int qnt_linhas;

// estrutura de repetição
    while (opc != 2) {



        printf("Digite 1 para criar um aluno, e 2 para fechar o programa: \n");
        scanf("%d", &opc);
// Analisa se o usuário vai criar um aluno
        if (opc == 1) {
            cria_Aluno(alunos);

        }

    }
//declarando variaveis 
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
