#ifndef EXERCICIO5_H
#define EXERCICIO5_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct pessoa{
    
    char nome[30];
    char endereco[100];
    char fone[10];
    long int CEP;

}structPessoa;

typedef struct agenda{

    struct agenda *anterior;
    structPessoa dados;
    struct agenda *proximo;

}structAgenda;


void imprimirMenu();
int escolhaMenu();

void inserirPessoa();


#endif