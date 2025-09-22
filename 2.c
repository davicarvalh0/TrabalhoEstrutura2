/*Modifique o programa anterior para dobrar o tamanho do vetor
usando realloc, mantendo os valores antigos e preenchendo
os novos.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i, *vet;

    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    vet = malloc(n * sizeof *vet);
    if (vet == NULL) {
        printf("Erro de alocacao...");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", vet + i); // ! Recurso interessante
    }
    printf("Vetor: ");
    for (i = 0; i < n; i++) { 
        printf("%-3d", vet[i]); 
    }
    int *tmp = realloc(vet, (n * 2) * sizeof *vet);
    if (tmp == NULL) {
        printf("Erro de realocacao");
        return 1;
    }
    vet = tmp;
    printf("\nO tamanho do vetor dobrou!\nDigite mais valores para o completar\n");
    for (i = n; i < (n * 2); i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", vet + i);
    }
    printf("Vetor: ");
    for (i = 0; i < (n * 2); i++) { 
        printf("%-3d", vet[i]); 
    }
    free(vet);
    vet = NULL;
    return 0;
}