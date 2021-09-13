#include<stdio.h>

// mmc é feito dividindo ambos os numeros pelo seu divisor comum,
// por isso é necessario o mdc.
int recMax(int *vet, int size_of, int max) {
    if (max < vet[size_of]) max = vet[size_of];

    if (size_of == 1) return max;
    return recMax(vet, size_of-1, max);
}
int max(int vet[], int len) {
    return recMax(vet, len, -99999);
}

void showVet(int *vet, int len) {
    int i;
    for (i = 0; i < len; i++) printf("%d, ", vet[i]);
}

int main() {
    int vet[] = {1,5,3,8,2,10,7,6,4};
    int len = sizeof(vet)/sizeof(int) - 1;

    printf("o maior valor do vetor: ");
    showVet(vet, len);
    printf("é: %d", max(vet, len));

    return 0;
}