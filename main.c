#include <stdio.h>
#include "aluno.c"

int main(){

    int opc = 0;
    Aluno * aluno;

    while (opc != 2)
    {
        printf("Digite 1 para criar um aluno, e 2 para fechar o programa: \n");
        scanf(opc);
        
        if (opc == 1)
        {
            aluno = cria_Aluno();
        }
    }


    return 0;
}