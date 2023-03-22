#include <stdio.h>
#include "aluno.c"

int main(){

    int opc;
    Aluno * alunos;
    FILE* teste;
    char linha[100];
    char nomes[20][50];
    //int qnt_linhas;
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

    //qnt_linhas = contador();

    while(fgets(linha, 100, teste) != NULL) {
        fgets(nomes[i], 50, teste);
        i++;
    }
    printf("AGORA e O LACO!\n");
   //     for(i = 0; i < 20; i++) {
   //     printf("%s", nomes[i]);
    //}
    printf("\n%s", nomes[0]);
    printf("\n%s", nomes[1]);
    printf("\n%s", nomes[2]);
    printf("\n%s", nomes[3]);
    printf("\n%s", nomes[4]);
    printf("\n%s", nomes[5]);
    printf("\n%s", nomes[6]);
    printf("\n%s", nomes[7]);
    printf("\n%s", nomes[8]);   



    combSort(nomes[20][50], i);

    i = 0;
        

    fclose(teste);

    return 0;
}