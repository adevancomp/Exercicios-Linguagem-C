/*
 171. Para uma pesquisa relativa os hábitos de estudo dos alunos dos cursos de engenharia da
 Universidade do Estado do Amazonas, foi idealizado um sistema baseado numa estrutura TDados, com
 campos char Nome[40] ; char Sexo; int NumHoras ; onde Nome e Sexo têm finalidades obvias (Sexo recebe M ou F )
 e NumHoras recebe o núimero de horas diárias de estudo do pesquisado
 a) Escreva uma função que armazene os dados coletados (quantidade de alunos pesquisados, não conhecido a priori)
 num vetor de estrutura
 b) Escreva uma função que retorne os nomes dos alunos que dedicam mais horas diárias de estudo
*/
 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 /* irei definir a minha estrutura TDados */

 typedef struct aluno{
    char Nome[40];
    char Sexo;
    int NumHoras;
 }Aluno;

/* aloca memória dinamicamente a memória e realiza a gravação dos dados*/
void armazenaDados(int n,Aluno** turmas)
{
    int i;
    turmas=(Aluno**)malloc(n*(sizeof(Aluno*)));
    printf("---Turmas---");
    for(i=0;i<n;i++){
        turmas[i]=(Aluno*)malloc(sizeof(Aluno));

        printf("Aluno[%d]:\n",i);
        scanf(" %39[^\n]",&(turmas[i]->Nome));

        printf("Sexo:\n");
        scanf("%c",&(turmas[i]->Sexo));

        printf("Horas de estudo: ");
        scanf("%d",&(turmas[i]->NumHoras));
    }
}

int main(void){
    Aluno** turmas;

    int n;
    printf("Quantidade de alunos:");
    scanf("%d",&n);

    armazenaDados(n,turmas);
    printf("NumHoras: %d",turmas[0]->NumHoras);
    return 0;
}
