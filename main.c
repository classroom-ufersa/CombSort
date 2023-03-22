#include <stdio.h>
#include "aluno.c"

int main(){

    int opc;
    Aluno * alunos;
    FILE* teste;
    char nomes[20][50];
    int qnt_linhas;
    int i = 0;

    teste = fopen("Alunos.txt", "rt");
    if(teste == NULL) {
        exit(1);
    }

    while (opc != 2) {
    


        printf("Digite 1 para criar um aluno, e 2 para fechar o programa: \n");
        scanf("%d", &opc);
        
        if (opc == 1) {
            cria_Aluno(alunos);
            
        }

    }

    qnt_linhas = contador();

    while(i < qnt_linhas) {
        fgets(nomes[i], 50, teste);
        i++;
    }
        for(i = 0; i < qnt_linhas; i++) {
        printf("%s", nomes[i]);
        
    }  

    combSort(nomes, qnt_linhas);

    i = 0;
        

    fclose(teste);

    return 0;
}