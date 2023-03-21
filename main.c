#include <stdio.h>
#include "aluno.c"

int main(){

    int opc;
    Aluno * alunos;

    printf("Digite 1 para criar um aluno, e 2 para fechar o programa: \n");
    scanf("%d", &opc);
        
    if (opc == 1)
    {
        cria_Aluno(alunos);
    }


    return 0;
}