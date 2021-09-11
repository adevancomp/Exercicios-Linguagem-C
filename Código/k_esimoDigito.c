/*119.Escreva uma função que retorne o k-ésimo dígito (da direita para esquerda) de um 
inteiro n, k e n dados. Por exemplo, K_esimoDigito(2845, 3) = 8. Recursividade em c*/

#include <stdio.h>

int k_esimoDigito(int n, int k)
{
    
    int d;
    if(k==1){
        return n%10;
    }
    else{
        d=n/10;
        k_esimoDigito(d,k-1);
    }
    
}

int main(void)
{
    int digito,n,k;
    
    printf("Digite um inteiro (n) ");
    scanf("%d",&n);
    
    printf("qual posição ? ");
    scanf("%d",&k);

    digito=k_esimoDigito(n,k);
    printf("Digito %d : %d",k,digito);
    return 0;
}
