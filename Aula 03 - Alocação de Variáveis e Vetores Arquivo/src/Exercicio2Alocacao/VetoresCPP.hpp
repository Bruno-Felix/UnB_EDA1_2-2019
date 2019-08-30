#ifndef VETORESCPP_HPP
#define VETORESCPP_HPP

#include <string>

using namespace std;

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

#endif