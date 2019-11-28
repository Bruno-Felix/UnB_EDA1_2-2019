#include <stdio.h>
#include <stdlib.h>

typedef struct structArvore{

    struct structArvore *esquerda;
    int linhaDoArquivo;
    struct structArvore *direita;
}structArvore;


void **criarRaiz(structArvore **Raiz, int linhas);


int main(){
   
   structArvore *raiz = (structArvore *) malloc(sizeof(malloc));
   raiz = NULL;

   int linhas = 5;
   
   criarRaiz(&raiz, linhas);
   printf("raiz->linhas: %d\n", raiz->linhaDoArquivo);

   return 0;
}

void **criarRaiz(structArvore **Raiz, int linhas){

   structArvore *novoNo = (structArvore *) malloc(sizeof(malloc));
   novoNo->linhaDoArquivo = linhas;

   if(*Raiz == NULL){
      *Raiz = novoNo;
   }
}