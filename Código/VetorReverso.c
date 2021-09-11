#include <stdio.h>
#include <stdlib.h>
void rev(int n,float * v,float* reverso)
{
    int i,j;
    j=n-1;

    for (i=0;i<n;i++){
        reverso[i]=v[j];
        j--;
    }
}
int main(void)
{
    int n,i;
    float * v;
    float * reverso;
    printf("n: ");
    scanf("%d",&n);
    v = (float *) malloc(n*sizeof(float));
    reverso = (float *) malloc(n*sizeof(float));
    printf("Vetores:\n");
    for (i=0;i<n;i++){
        scanf("%f",&v[i]);
    }
    rev (n,v,reverso);
    printf("\n----Vetor Reverso_----\n");
    for(i=0;i<n;i++){
        printf("\nv[%d]: %.2f",i,reverso[i]);
    }
    return 0;
}

