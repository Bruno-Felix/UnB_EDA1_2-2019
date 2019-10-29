#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct TNo{

    int Numero;
    struct TNo *Prox;
}TNo;

typedef struct Lista{

    TNo *Primeiro;
    int Qtde;
    TNo *Ultimo;
}TLista;


TNo *IncluiCabeca(TLista *pLista, int pValor);
TNo *IncluiCalda(TLista *pLista, int pValor);
TNo *ExcluiCabeca(TLista *pLista);
TNo *ExcluiCalda(TLista *pLista);
TNo *IncluiAntes(TLista *pLista, int pChave, int pValor);
TNo *ExcluiChave(TLista *pLista, int pChave);

int menu();