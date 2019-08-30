#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define tamanho 100

typedef struct agenda{
    
    char nome[30];
    char endereco[100];
    char fone[10];
    long int CEP;

}structPessoa[tamanho];


void inserirPessoa();


void menu();
void escolhaMenu();


int main(){

    structPessoa *structAgenda[100];

    *structAgenda = (structPessoa *) calloc (100, sizeof(structPessoa));

    strcpy("Joao", structAgenda[100]->nome);

    menu();

    return 0;
}


void menu(){  

    system("clear");
    printf("\n    MENU:\n\n");
    printf("    1 - Inserir novo nome na agenda;\n");
    printf("    2 - Imprimir dados de todos os cadastradas;\n");
    printf("    3 - Imprimir nomes cadastrados que começam por uma letra;\n");
    printf("    4 - Fim.\n");

char Z = 'A';

while(Z != 'S' && Z != 'N'){

    scanf("%c", &Z);
    
    if(Z == 'S'){

    }
    else if(Z == 'N'){

    }
}
    escolhaMenu();
}

void escolhaMenu(){
    
    int escolhaMenu;
    printf("\n    Escolha: ");
    scanf("%d", &escolhaMenu);

    switch (escolhaMenu){
        
        case 1:

            

            break;

        case 2:

            printf("2\n");
            break;

        case 3:
            printf("3\n");
            break;

        case 4:

            printf("4\n");
            break;

        case 5:

            printf("5\n");
            break;
        
        default:

            menu();
            break;
    }
}
