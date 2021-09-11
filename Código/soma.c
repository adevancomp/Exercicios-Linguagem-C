#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Tabuada_Completa(float a,float b,float *soma,float *subtracao,float *raizA,float *raizB){
    *soma= a+b;
    *subtracao=a-b;
    *raizA=sqrt(a);
    *raizB=sqrt(b);

}

int main(void){
    float a,b,soma,subtracao,raizA,raizB;
    printf("----Tabuada----\n");
    printf("digite o valor do real a:");
    scanf("%f",&a);
    printf("digite o valor do real b:");
    scanf("%f",&b);

    Tabuada_Completa(a,b,&soma,&subtracao,&raizA,&raizB);
    printf("a: %.2f b: %.2f soma: %.2f subtracao: %.2f raizA: %.2f raizB: %.2f",a,b,soma,subtracao,raizA,raizB);

    return 0;
}
