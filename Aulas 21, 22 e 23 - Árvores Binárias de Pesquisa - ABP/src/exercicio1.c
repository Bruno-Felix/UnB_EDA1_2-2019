#include <stdio.h>
#include <stdlib.h>


typedef struct No{
    struct No *esquerda;
    char dado;
    struct No *direita;
}No;


No *constroiArvore(No *raiz);
char lerProximo();
void printarArvore(No *raiz);

int main(){

    No *raiz = NULL;
    
    raiz = constroiArvore(raiz);  
    printarArvore(raiz);

    return 0;
}

No *constroiArvore(No *raiz){
    
    char novoCaractere;
    novoCaractere = lerProximo();
    printf("novoCaractere = %c\n", novoCaractere);

    if(novoCaractere != '.'){

        raiz = (No *) malloc (sizeof(No));

        raiz->dado = novoCaractere;
        
        constroiArvore(raiz->esquerda);
        //printf("\ndireita\n");
        constroiArvore(raiz->direita);
    }
    else{

        raiz = NULL;
    }

    return raiz;
}

char lerProximo(){

    char proxChar;
    printf("Insira char na arvore: \n");
    
    scanf(" %c", &proxChar);

    return proxChar;
}

void printarArvore(No *raiz){
    
    if(raiz != NULL){

        printf("%c ", raiz->dado);
        printarArvore(raiz->esquerda);
        printarArvore(raiz->direita);
    }
}