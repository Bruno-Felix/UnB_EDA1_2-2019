#include <stdlib.h>
#include <stdio.h>
#include "VetoresC.h"

int main(){

    int*  vetorInt;
    float* vetorFloat;

    int quantidadeInt, quantidadeFloat;

    scanf("%d", &quantidadeInt);
    scanf("%d", &quantidadeFloat);

    vetorInt = alocacaoInt(quantidadeInt);
    vetorFloat = alocacaoFloat(quantidadeFloat);

    printf("VetorInt: %x\n", vetorInt);
    printf("VetorFloat: %x\n", vetorFloat);

    return 0;
}
