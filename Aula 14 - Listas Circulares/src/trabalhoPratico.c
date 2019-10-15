#include <stdio.h>
#include <stdlib.h>

void visualizarMenu();
void menu();


int main(){

    visualizarMenu();
    menu();

    return 0;
}

void visualizarMenu(){

    printf("        Compre Melhor\n\nMenu:\n\n");

    printf("1 - Listar todos os registros em ordem crescente;\n");
    printf("2 - Listar todos os registros em ordem decrescente;\n");
    printf("3 - Inserir novo registro;\n");
    printf("4 - Excluir registro;\n");
    printf("5 - Listar registro;\n");
    printf("6 - Alterar registro.\n");
}

void menu(){

    do{
        int opcaoMenu;
        scanf("%d", &opcaoMenu);

        switch (opcaoMenu){
        case 1:
            printf("Listar todos os registros em ordem crescente;\n");
            break;

        case 2:
            printf("2 - Listar todos os registros em ordem decrescente;\n");
            break;

        case 3:
            printf("Inserir novo registro;\n");
            break;

        case 4:
            printf("Excluir registro;\n");
            break;

        case 5:
            printf("Listar registro;\n");
            break;

        case 6:
            printf("Alterar registro.\n");
            break;
        case 7:
            printf("Programa Finalizado.\n");
            exit(1);
        
        default:
            break;
        }
    }while(1);
}