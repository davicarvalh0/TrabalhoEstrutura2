/*Escreva um programa que aloque dinamicamente um vetor de
inteiros, leia n valores e calcule a soma de todos eles.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, sum = 0;
    int *vet;
    printf("Tamanho do vetor: ");
    scanf("%d", &n),
    vet = malloc(n * sizeof *vet);
    if (vet == NULL)
    {
        printf(" deu ruim");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < n; i++) {
        sum = sum + vet[i];
    }
    printf("Soma: %d\n", sum);
    free(vet);
    vet = NULL;

    return 0;
}