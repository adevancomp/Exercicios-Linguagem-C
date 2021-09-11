/*  158.Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.
158.1.Deverão ser armazenados, para cada aluno: matrícula, sobrenome (apenas um) e ano de nascimento.
158.2.Ao início do programa, o usuário deverá informar o número de alunos que serão armazenados
158.3.O programa deverá alocar dinamicamente a quantidade necessária dememeria para armazenar os
registros dos alunos.
158.4.O programa deverá pedir ao usuário que entre com as informações dos alunos. */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/* define um tipo estruturado para guardar as informacoes do alunos*/
typedef struct aluno{
    int matr;
    char sobrenome[31];
    char data_nasc[11];
}Aluno;
/* a função irá receber um ponteiro para aluno, entao ela deve ter um ponteiro de
ponteiro para aluno*/

void preenche_turma(int n,Aluno** turma)
{
    int i=0;
    /* n é a quantidade de alunos na turma, meu vetor de ponteiros para estrutura*/
    for(i=0;i<n;i++){
        /* o espaço para cada elemento deve armazenar um ponteiro para aluno */
        turma[i]=(Aluno*)malloc(sizeof(Aluno));

        printf("\t--Aluno %d--\n",i+1);

        printf("matrícula:");
        scanf("%d",&(turma[i]->matr));

        printf("sobrenome:\n");
        scanf(" %30[^\n]",turma[i]->sobrenome);

        printf("data de nascimento:\n");
        scanf(" %10[^\n]",turma[i]->data_nasc);
    }
}

int main(void)
{
    int n;
    Aluno *turma[10];

    printf("quantidade de alunos: ");
    scanf("%d",&n);

    preenche_turma(n,turma);
    return 0;
}
