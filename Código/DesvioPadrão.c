/*105.O desvio padrão de uma relação de números reais é a raiz quadrada da média
aritmética dos quadrados dos desvios. Escreva uma função que receba uma
relação de números reais e forneça o seu desvio padrão.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Media(int n,double *v)
{
    int i;
    double media_simples=0.000;
    for (i=0;i<n;i++){
        media_simples=media_simples+v[i];
    }
    media_simples=media_simples/n;
    return media_simples;
}

double desvio_padrao(int n, double *v)
{
    int i;
    double desvio=0.0000, media=0.000;
    media=Media(n,v);
    for (i=0;i<n;i++){
        desvio=desvio+(v[i]-media)*(v[i]-media);
    }
    desvio=sqrt(desvio/n);
    return desvio;
}
/* %g especifica um double (ou float ) no formato mais apropriado(%f ou %e) printf*/
/* %lf,%le,%lg especificam um double*/
int main(void)
{
    int n,i;
    double * v, desvio;
    printf("Digite a quantidade de termos: ");
    scanf("%d",&n);
    v = (float *) malloc(n*sizeof(double));
    for (i=0;i<n;i++){
        printf("v[%d]: ",i);
        scanf("%lf",&v[i]);
    }
    desvio=desvio_padrao(n,v);
    printf("O desvio padrao e: %g",desvio);
    free(v);
    return 0;
}