#include "trabalhoPratico.h"


int main(){

    TNo *Lista = NULL;


    int valor;
    int escolha = menu();
    switch (escolha){
    case 1:

        scanf("%d", &valor);

        Lista = IncluiCabeca(Lista, valor);

        break;
    
    case 2:
        break;

    case 3:
        break;

    case 4:
        break;

    case 5:
        break;

    case 6:
        break;
    
    default:
        break;
    }
    return 0;
}

TNo *IncluiCabeca(TLista *pLista, int pValor){

    TNo *NoCabeca = (TNo *) malloc(sizeof(TNo));

    NoCabeca->Numero = pValor;
    NoCabeca->Prox = pLista;
    pLista = NoCabeca;

    return pLista;
}

int menu(){
    int returnEscolha;

    printf("MENU:\n");
    printf("1 - IncluiCabeca;\n");
    printf("2 - IncluiCalda;\n");
    printf("3 - ExcluiCabeca;\n");
    printf("4 - ExcluiCalda;\n");
    printf("5 - IncluiAntes;\n");
    printf("6 - ExcluiChave;\n");

    scanf("%d", &returnEscolha);

    return returnEscolha;
}

