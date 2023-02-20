#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int tcid;
    int i, j, k;
    scanf("%d",&tcid);
    int **matriz;
    matriz=(int **)malloc(tcid*sizeof(int*));
    for(i=0;i<tcid;i++){
        matriz[i]=(int *)malloc(tcid*sizeof(int));
    }
    for(i=0;i<tcid;i++){
        for(j=0;j<tcid;j++){
            matriz[i][j]=0;
        }
    }

    for(i=0;i<(tcid-1);i++){
        for(j=(i+1);j<tcid;j++){
            scanf("%d",&matriz[i][j]);
            matriz[j][i]=matriz[i][j];
        }
    }


    int rota;
    int cido;
    int *list_cid_rota;

    scanf("%d",&rota);
    scanf("%d",&cido);
    cido--;

    list_cid_rota=(int*)malloc(rota*sizeof(int));
    for(i=0;i<rota;i++){
        list_cid_rota[i]=0;
    }
    list_cid_rota[0]=cido;
    for(i=1;i<rota;i++){
        scanf("%d",&list_cid_rota[i]);
        list_cid_rota[i]--;
    }   

    float pdisel;
    scanf("%f",&pdisel);

    float python=0.0;
    for(i=0;i<(rota-1);i++){
        k=list_cid_rota[i];
        j=list_cid_rota[i+1];
        python=python+matriz[k][j];
    }    
    
    python+=matriz[list_cid_rota[rota-1]][cido];
    python=python/3*pdisel;

    printf("R$ %.2f",python);

    return 0;
}
