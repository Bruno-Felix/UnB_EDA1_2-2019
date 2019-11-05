#include <stdio.h>
#include <stdlib.h>


typedef struct exercicio1{
    struct No *esquerda;
    char letra;
    struct No *direita;
}No;


No *criarArvore(No *raiz);


int main(){

    No *raiz;
    raiz = criarArvore(raiz);

    return 0;
}

No *criarArvore(No *raiz){

    char stringArvore[16] = {};
    scanf("%s", stringArvore);
    printf("print: %s\n", stringArvore);

    for(int i = 0; i == '\0' ; i++){
        printf("%d %c\n", i, stringArvore[i]);
    }
}