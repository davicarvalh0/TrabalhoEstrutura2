/*Leia um número n e aloque dinamicamente um vetor de n
inteiros. Preencha com valores lidos do usuário e depois
imprima todos.*/

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
    free(vet);
    vet = NULL;
    return 0;
}