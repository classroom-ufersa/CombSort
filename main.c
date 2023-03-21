#include <stdio.h>
#include "aluno.c"

int main(){

    int opc = 0;

    while (opc != 2)
    {
        printf("Digite 1 para criar um aluno, e 2 para fechar o programa: \n");
        scanf(opc);
        switch (opc)
        {
        case 1:
                Aluno * aluno;
                cria_Aluno(aluno);
            break;
        case 2:
                exit(1);
        break;
        }
    }


    return 0;
}