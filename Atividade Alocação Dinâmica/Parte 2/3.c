/*Implemente um programa que leia um número n, aloque
dinamicamente um vetor de float, preencha com notas e
calcule a média.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, d = 0;
    float *vet;
    float media = 0, sum = 0;
    printf("Tamanho do vetor: ");
    scanf("%d", &n),
    vet = malloc(n * sizeof *vet);
    if (vet == NULL)
    {
        printf(" deu ruim");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%f", &vet[i]);
    }
    for (int i = 0; i < n; i++) {
        sum = sum + vet[i];
        d = d + 1;
    }
    media = sum / d;
    printf("Media: %.2f\n", media);
    free(vet);
    vet = NULL;

return 0;
}
