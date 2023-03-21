#include <stdio.h>
#include "aluno.c"

int main(){

    int opc;
    Aluno * alunos;
    char nome[50];

while (opc != 2)
{
    


    printf("Digite 1 para criar um aluno, e 2 para fechar o programa: \n");
    scanf("%d", &opc);
        
    if (opc == 1)
    {
        cria_Aluno(alunos);
        strcpy(nome[50], recebe_nomes());
        printf("\n%s\n", nome[50]);
        
    }

}
    return 0;
}