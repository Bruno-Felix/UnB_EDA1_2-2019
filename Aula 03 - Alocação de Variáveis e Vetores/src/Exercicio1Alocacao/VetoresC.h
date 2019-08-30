#include <stdlib.h>
#include <stdio.h>	

int *alocacaoInt(int a){

    int *vetorInt;
    vetorInt = (int*)	calloc (a, sizeof(int));

    return vetorInt;
}

float *alocacaoFloat(int quantidateFloat){
    
    float *vetorFloat;
    vetorFloat = (float*)	calloc (quantidateFloat, sizeof(float));

    return vetorFloat;
}