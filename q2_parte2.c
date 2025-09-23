#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *p, i, soma = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    p = malloc(n * sizeof(int));
    if(p != NULL){
        for (i = 0; i < n ; i++){
            printf("Digite o valor do vetor na posição %d: ", i);
            scanf("%d", &p[i]);
            soma = soma + p[i];
        }
    }
    else {
        printf("Erro na alocação da memória!\n");
        return 1;
    }
    printf("A soma total dos vetores é: %d\n",soma);
    free(p);
   
}