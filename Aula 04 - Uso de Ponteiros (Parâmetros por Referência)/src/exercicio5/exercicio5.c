#include "exercicio5.h"


int main(){

    int escolha;
    do{
        imprimirMenu();
        escolha = escolhaMenu();

        switch (escolha){
            case 1:
                
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            case 4:
                printf("\n\n    Fim do Programa!\n\n");
                exit(-1);

                break;
            default:
                printf("\n\n    Fim do Programa(default)!\n");
                exit(-1);

                break;
        }

    }while(escolha != 4);

    return 0;
}


void imprimirMenu(){  

    system("clear");
    printf("\n    MENU:\n\n");
    printf("    1 - Inserir novo nome na agenda;\n");
    printf("    2 - Imprimir dados de todos os cadastradas;\n");
    printf("    3 - Imprimir nomes cadastrados que começam por uma letra;\n");
    printf("    4 - Fim.\n");
}

int escolhaMenu(){
    
    int escolhaMenu;
    printf("\n    Escolha: ");
    scanf("%d", &escolhaMenu);

    return escolhaMenu;
}
