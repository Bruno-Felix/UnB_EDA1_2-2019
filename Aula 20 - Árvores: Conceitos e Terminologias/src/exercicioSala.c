#include <stdio.h>
#include <stdlib.h>

typedef struct TNo{
    struct TNo *esquerda;
    int dado;
    struct TNo *direita;
}TNo;


TNo * Constroi(TNo *Raiz);
void printarArvore(TNo *no);


int main (){

    TNo *raiz;

    raiz = Constroi(raiz);
    
    printarArvore(raiz);

    return 0;
}


 TNo * Constroi(TNo *no){

    int dado;
    printf("Insira dado: \n");
    scanf("%d", &dado);
    
    if(dado != 0){
        no = (TNo *) malloc (sizeof(TNo));
        no->dado = dado;

        no->esquerda = Constroi(no->esquerda);
        no->direita = Constroi(no->direita);
    }
    else{
        no = NULL;
    }

    return no;
}

void printarArvore(TNo *no){
    
    printf(" %d ", no->dado);
    
    if(no->esquerda != NULL){

        printarArvore(no->esquerda);
    }
    else{
        printf(" . ");
    }
    if(no->direita != NULL){

        printarArvore(no->direita);
    }
    else{
        printf(" . ");
    }
}