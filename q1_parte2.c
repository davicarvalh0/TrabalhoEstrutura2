#include <stdio.h>
#include <stdlib.h>

int main(){
    int **p, m, n, i, j;
    printf("Quantas linhas vai ter sua matriz? ");
    scanf("%d", &m);
    printf("Quantas colunas vai ter sua matriz? ");
    scanf("%d", &n);
    p = malloc(m * sizeof(int*));
    for (i = 0; i < m; i++){
        p[i] = malloc(n * sizeof(int));
    }
    if(p != NULL){
    for (i = 0; i< m;i++){
        for (j = 0; j < n; j++){
            p[i][j] = i+j;
        }
    }   
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("%-3d",p[i][j]);
        }
        printf("\n");
    }
    }
    else {
        printf("Erro na alocação da memória!");
        return 1;
    }
    for (i = 0; i <m ; i++){
    free(p[i]); 
    }
    free(p);
    return 0;
}