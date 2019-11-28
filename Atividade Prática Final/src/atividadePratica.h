#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct structArvore{

    struct structArvore *esquerda;
    char codicoDoProduto[7];
    int linhaDoArquivo;
    struct structArvore *direita;
}structArvore;


FILE *acharArquivoData();

structArvore *lerArquivoCriaArvore(FILE *file);

void **inserirNaArvore(structArvore **Raiz, char *codicoDoProduto,  int linhaDoArquivo);
void exibirEmOrdem(structArvore *No);

void iniciarBusca(structArvore *Raiz);
structArvore *buscarProduto(structArvore *No, char*codicoDeBusca);
void printarDadosProduto(structArvore *No);