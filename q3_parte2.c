#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    float *p, soma = 0;
    printf("Digite a quantidade de notas que vão ser armazenadas: ");
    scanf("%d", &n);
    p = malloc(n * sizeof(float));
    if(p != NULL){
        for (i = 0; i < n; i++){
            printf("Digite a nota que vai ficar no vetor  posição %d: ", i);
            scanf("%f", &p[i]);
            soma = soma + p[i];
        }
    }
    else {
        printf("Erro na alocação da memória!\n");
        return 1;
    }
    printf("A média de todas as notas é: %.2f\n",soma/n);
    free(p);
}
