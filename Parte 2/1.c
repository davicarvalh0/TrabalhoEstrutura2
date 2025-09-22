/*Crie uma matriz m × n usando ponteiro de ponteiro (int **).
Preencha cada posição com i + j e exiba a matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int m, n, **mat, i, j;

    printf("Linhas: ");
    scanf("%d", &m);
    printf("Colunas: ");
    scanf("%d", &n);
    system("clear");
    mat = malloc(m * sizeof *mat);
    if (mat == NULL){
        printf("Erro de alocacao...");
        return 1;
    }
    for (i = 0; i < m; i++){
        mat[i] = malloc(n * sizeof *mat[i]);
        for (j = 0; j < n; j++){
            mat[i][j] = i + j;
        }
    system("clear");
    }
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("%-3d", mat[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++){
        free(mat[i]);
        mat[i] = NULL;
    }
    free(mat);
    mat = NULL;

    return 0;
}