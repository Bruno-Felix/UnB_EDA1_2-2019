#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool incluirValor();

int main(){

    int *pvalores;
    int pcapacidade;
    int ptamanho;

    printf("Tamanho do Vetor: ");
    scanf("%d", &pcapacidade);

    pvalores = (int *) calloc(pcapacidade, sizeof(int));

    return 0;
}