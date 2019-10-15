#include <stdio.h>
#include <stdbool.h>

typedef struct TPilha{

    int Topo;
    int Idade[5];

} TPilha;

typedef struct TElemento{
    
    int numIdade;

} TElemento;


void visualizarMenu();
void menu(TPilha *Pilha);

void Esvazia(TPilha *Pilha);
bool Vazia(TPilha *Pilha);
bool Empilha(TPilha *Pilha, TElemento *Elemento);
TElemento *Desempilha(TPilha *Pilha);
TElemento *Consulta(TPilha *Pilha);
TElemento *novoElemento();


int main(){

    TPilha *Pilha = (TPilha *)calloc(1, sizeof(TPilha));

    menu(Pilha);

    return 0;
}


void Esvazia(TPilha *Pilha){

}
bool Vazia(TPilha *Pilha){

}
bool Empilha(TPilha *Pilha, TElemento *Elemento){

}
TElemento *Desempilha(TPilha *Pilha){

}
TElemento *Consulta(TPilha *Pilha){

}

TElemento *novoElemento(){

}

void menu(TPilha *Pilha){

    visualizarMenu();

    TElemento *Elemento = (TElemento *)calloc(1, sizeof(TElemento));

    int escolhaMenu;
    scanf("%d", &escolhaMenu);

    while(1){
        switch (escolhaMenu){
            
        case 1:

            Esvazia(Pilha);
        
            break;
        case 2:

            Vazia(Pilha);
        
            break;
        case 3: 

            
            Elemento =  novoElemento();

            Empilha(Pilha, Elemento);

            break;
        case 4:

            Elemento = Desempilha(Pilha);

            break;
        case 5:

            Elemento = Consulta(Pilha);

            break;
        case 6:

            exit(1);

            break;
        
        default:
            break;
        }
    }
}

void visualizarMenu(){

    printf("MENU:\n");

    printf("1 - Esvaziar a pilha;\n");
    printf("2 - Verificar Pilha Vazia;\n");
    printf("3 - Empilhar Elemento;\n");
    printf("4 - Desempilhar Elemento;\n");
    printf("5 - Consultar Elemento.\n");
}