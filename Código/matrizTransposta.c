/*114.Escreva uma função que forneça a transposta de uma matriz dada.*/
#include <stdio.h>
#include <stdlib.h>
int ** transposta(int n, int m, int ** matriz)
{
    int i,j;
    int **trp;

    /* minha matriz de m linhas e n colunas*/
    /*vou iniciar as colunas*/

    trp=(int **) malloc(m*sizeof(int));
    for (i=0;i<m;i++){
        trp[i]=(int *)malloc(n*sizeof(int));
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            trp[i][j]=trp[j][i];
        }
    }
    return trp;
}

int main(void)
{
    int i,j,n,m;
    int **matriz;
    int **trp;
    printf("(m) linhas: ");
    scanf("%d",&m);
    printf("(n)colunas: ");
    scanf("%d",&n);
    matriz=(int **) malloc(m*sizeof(int));
    trp=(int **)malloc(m*sizeof(int));
    for(i=0;i<m;i++){
        matriz[i]=(int *)malloc(n*sizeof(int));
        trp[i]=(int *)malloc(n*sizeof(int));
    }

    /*Preciso ler todos os valores da matriz*/
    printf("insira os valores correspondentes:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("\nv[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    trp=transposta(n,m,matriz);
    printf("tranposta: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("\nv[%d][%d]: %d",i,j,trp[i][j]);
        }
    }

    return 0;
}
