#include <stdio.h>
#include <stdlib.h>

typedef struct TNo{
    struct TNo *esquerda;
    int dado;
    struct TNo *direita;
}TNo;


TNo * Constroi(TNo *raiz);
void printarArvore(TNo *raiz);


int main (){

    TNo *raiz;

    raiz = Constroi(raiz);
    
    printarArvore(raiz);

    return 0;
}


 TNo * Constroi(TNo *raiz){

    int dado;
    printf("Insira dado: \n");
    scanf("%d", &dado);
    /* printf("dado: %d", dado); */
    
    if(dado != 0){
        raiz = (TNo *) malloc (sizeof(TNo));
        raiz->dado = dado;

        raiz->esquerda = Constroi(raiz->esquerda);
        raiz->direita = Constroi(raiz->direita);
    }
    else{
        raiz = NULL;
    }

    return raiz;
}

void printarArvore(TNo *raiz){
    
    printf(" %d ", raiz->dado);
    
    if(raiz->esquerda != NULL){

        printarArvore(raiz->esquerda);
    }
    else{
        printf(" . ");
    }
    
    if(raiz->direita != NULL){

        printarArvore(raiz->direita);
    }
    else{
        printf(" . ");
    }
}