/* 117.As companhias de transportes aéreos costumam representar os nomes dos
passageiros no formato último sobrenome/nome. Por exemplo, o passageiro Carlos
Drumond de Andrade seria indicado por Andrade/Carlos. Escreva um programa que
receba um nome e o escreva no formato acima. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat( char *s1, char *s2)
{
    char *result = malloc(strlen(s1) +strlen("/") + strlen(s2) + 1);

    strcpy(result, s1);
    strcpy(result,"/");
    strcat(result, s2);
    return result;
}

int main()
{
    int n,i;
    char nome_completo[81];
    char nome[15];
    char meio[15];
    char sobrenome[15];
    char formato[32];

    printf("Nome completo: ");
    scanf(" %80[^\n]",nome_completo);
    printf("Seu nome é: %s",nome_completo);
    for(i=0;nome_completo[i]!=" ";i++){
        nome[i]=nome_completo[i];

    }
    n=i;
    nome[i]="\0";
    for(i=(n+1);nome_completo[i]!=" ";i++){
        meio[i]=nome_completo[i];
    }
    n=i;
    meio[n]="\0";

    for(i=(n+1);nome_completo[i]!="\0";i++){

        sobrenome[i]=nome_completo[i];
    }

    char* s = concat(sobrenome,nome);
    printf("%*s",s);
    return 0;
}
