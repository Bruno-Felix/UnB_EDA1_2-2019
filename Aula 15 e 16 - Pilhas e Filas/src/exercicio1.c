#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Pilha{

    int Topo;
    int Idade[5];

}Pilha;

void visualizarMenu();
void menu(Pilha *Pilha);

void Esvazia(Pilha *Pilha);
bool Vazia(Pilha *Pilha);
void Empilha(Pilha *Pilha);
void *Desempilha(Pilha *Pilha);
void *Consulta(Pilha *Pilha);
void *novoElemento();
void printarPilha(Pilha *Pilha);


int main(){

    Pilha *PilhaDoPrograma = (Pilha *)calloc(1, sizeof(Pilha));

    menu(PilhaDoPrograma);

    return 0;
}


void Esvazia(Pilha *PilhaDoPrograma){

    for(int i = 0; i < 5; i++){

        PilhaDoPrograma->Idade[i] = 0;
    }

    menu(PilhaDoPrograma);
}

bool Vazia(Pilha *PilhaDoPrograma){
    
    int aux = 0;
    for(int i = 0; i < 5; i++){
        if(PilhaDoPrograma->Idade[i] == 0){
            aux++;
        }
    }

    if(aux == 5){

        return 1;
    }
    else{
        
        return 0;
    }
}

void Empilha(Pilha *PilhaDoPrograma){

    for(int i = 0; i < 5; i++){
        
        if(PilhaDoPrograma->Idade[i] == 0){
            
            int auxIdade;
            
            printf("Insira nova Idade: ");
            scanf("%d", &PilhaDoPrograma->Idade[i]);
            break;
        }
    }

    menu(PilhaDoPrograma);
}

void *Desempilha(Pilha *PilhaDoPrograma){
printf("Lista está vazia.\n");
}
void *Consulta(Pilha *PilhaDoPrograma){

}

void menu(Pilha *PilhaDoPrograma){

    bool auxVazio;

    system("clear");

    while(1){

        printarPilha(PilhaDoPrograma);
        visualizarMenu();

        int escolhaMenu = 0;
        scanf("%d", &escolhaMenu);
        
        switch (escolhaMenu){
            
        case 1:

            /* Esvazia(PilhaDoPrograma); */
        
            break;
        case 2:

            auxVazio = Vazia(PilhaDoPrograma);

            if(auxVazio == true){
                printf("\nLista está vazia.\n");
                break;
            }
            else{
                printf("\nLista não está vazia.\n");
                break;
            }

        case 3: 
            
            Empilha(PilhaDoPrograma);
            break;
        case 4:

            break;
        case 5:

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

void printarPilha(Pilha *PilhaDoPrograma){
    printf("\n\n----------------------\nVetor: [%d][%d][%d][%d][%d]\n----------------------\n\n", PilhaDoPrograma->Idade[0], 
                                                                                                  PilhaDoPrograma->Idade[1], 
                                                                                                  PilhaDoPrograma->Idade[2], 
                                                                                                  PilhaDoPrograma->Idade[3], 
                                                                                                  PilhaDoPrograma->Idade[4]);
}