#include <stdio.h>
#include "aluno.c"

int main() {

    int opc;
    Aluno * alunos;
    //FILE* teste;
    char **nomes = (char**)malloc(20 * sizeof(char*));
    int qnt_linhas, i = 0;

    
    for(i = 0; i < 20; i++) {
        nomes[i] = (char*)malloc(50 * sizeof(char));
    } 

    while (opc != 2) {
    


        printf("\nDigite 1 para criar um aluno, e 2 para fechar o programa: \n");
        scanf("%d", &opc);
        
        if (opc == 1) {
            cria_Aluno(alunos);
        }

    }

    qnt_linhas = contador();

    //printf("aki\n");

    nomes = recebe_nomes(qnt_linhas);

    //printf("\nAKIIII");

    combSort(nomes, qnt_linhas);   

    printf("\n??\n");

    for(i = 0; i < 20; i++){
        free(nomes[i]);
    }
    free(nomes);

    return 0;
}