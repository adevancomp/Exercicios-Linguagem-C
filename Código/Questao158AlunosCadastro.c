/* 158.Crie um programa que declare uma estrutura
(registro) para o cadastro de alunos.
158.1.Deverão ser armazenados, para cada
aluno: matrícula, sobrenome (apenas um) e ano
de nascimento.
158.2.Ao início do programa, o usuário deverá
informar o número de alunos que serão armazenados
158.3.O programa deverá alocar dinamicamente a quantidade necessária de
memória para armazenar os registros dos alunos.
158.4.O programa deverá pedir ao usuário que entre com as informações dos
alunos.
158.5.Ao final, mostrar os dados armazenados e liberar a memória alocada.*/

typedef struct aluno{
    int matr;
    char sobr[21];
    int nasc;
}Aluno;

void preenche_turma(int n,Aluno** turma)
{

    int i;
    printf("---Turma A----");
    for(i=0;i<n;i++){

    turma[i]=(Aluno*)malloc(sizeof(Aluno));

    printf("\nmatricula:");
    scanf("%d",&(turma[i]->matr));

    printf("ano de nascimento:");
    scanf("%d",&(turma[i]->nasc)); /* vamo mexer aqui para ler o sobrenomne*/
    printf("sobrenome:\n");
    scanf(" %20[^\n]",turma[i]->sobr);

    }
}

int main(void)
{
    Aluno** turma;
    int n,i=0;

    printf("Quantos alunos na turma:");
    scanf("%d",&n);

    turma=(Aluno**)malloc((sizeof(Aluno*))*n);
    preenche_turma(n,turma);

    /* mostrar os alunos */
    for(i=0;i<n;i++){
        printf("\nAluno %d\n",i);
        printf("\nmatricula:%d",turma[i]->matr);
        printf("\nano de nasc:%d",turma[i]->nasc);
        printf("\nsobrenome:%s",turma[i]->sobr);
    }
    /*liberar memoria*/
    for(i=0;i<n;i++){
        free(turma[i]);
    }
    free(turma);

    return 0;
}
