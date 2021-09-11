#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void Norma(int n, float *v, float *norma){
    int i;
    float acum=0.0F;
    
    for(i=0;i<n;i++){
        acum=acum+v[i]*v[i];
    }
    *norma=sqrt(acum);
}
int main()
{
    int n,i;
    float * v ;
    float norma=0.0F;
    
    printf("Quant de elementos: ");
    scanf("%d",&n);
    v = (float *) malloc(n*sizeof(float));
    for (i=0;i<n;i++){
        printf("v[%d]: ",i);
        scanf("%f",&v[i]);
    }
    
    Norma(n,v,&norma);
    printf("A norma foi :%.2f",norma);
    free(v);
    
    return 0;
}