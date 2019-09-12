#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char incluirLetraNoVetor(char *pvetcar, char letra, int ptammax, int pqtde);
char excluirLetraDoVetor(char *pvetcar, char letra, int ptammax, int pqtde);
void printVetor(char *pvetcar, int ptammax);

int main(){

    char *pvetcar;
    int ptammax;
    int pqtde = 0;

    printf("Tamanho do vetor: ");
    scanf("%d", &ptammax);

    pvetcar = (char *) calloc(ptammax, sizeof(char));


    while(1){

        printf("\n\n------------------------------\n");
        printVetor(pvetcar, ptammax);
        printf("\n1 - Incluir Letra no Vetor\n");
        printf("2 - Excluir Letra do Vetor.\n");

        int escolha;
        printf("Escolha: ");
        scanf("%d", &escolha);

        if(escolha == 1){

            system("clear");
            printf("\n\nLetra a ser acrescentada: ");
            
            setbuf(stdin, NULL);
            char letra;
            scanf("%c", &letra);

            *pvetcar =  incluirLetraNoVetor(pvetcar, letra, ptammax, pqtde);
        }

        else if(escolha == 2){

            system("clear");
            printf("\n\nLetra a ser excluida: ");
            
            setbuf(stdin, NULL);
            char letra;
            scanf("%c", &letra);

            excluirLetraDoVetor(pvetcar, letra, ptammax, pqtde);
        }

        else if(escolha == 3){

            system("clear");
            printf("\n\nNúmero de elementos: \n");

            printf("Tamanho: %d\n", ptammax);
        }
    }

    free(pvetcar);

    return 0;
}

char incluirLetraNoVetor(char *pvetcar, char letra, int ptammax, int pqtde){
    
    int i = 0;
    int limite = 0;
    int condicao = 0;

    for(int j = 0; j < ptammax; j++){
                
        if(pvetcar[j] == 45){
            
            condicao = 1;

            pvetcar[j] = letra;
            break;
        }
    }    
    while ((pvetcar[i]!='\0') && condicao == 0) {

        if((i+1) != (ptammax)){
            if((letra >= 48 && letra <= 57) ||
               (letra >= 65 && letra <= 90) || 
               (letra >= 97 && letra <= 122) || 
               (letra == 45)){

                pqtde++;

                i++;
            }
            else{
            
                break;
            }
        }
        else{

            limite = 1;
            break;
        }
    }

    if(limite != 1){
        if(pvetcar[i] == '\0'){
            
            pvetcar[i] = letra;
            
            printf("\n\npvetcar[%d] = '%c'\n", i, pvetcar[i]);
        }
    }
    else{
        
        printf("Vetor Cheio, impossível acrescentar mais letras\n");
    }

    return *pvetcar;
}

char excluirLetraDoVetor(char *pvetcar, char letra, int ptammax, int pqtde){

    int excluido = -1;
    int existencia = 0;

    for(int i = 0; i < ptammax; i++){
        
        if(pvetcar[i] == letra){

            excluido++;
            existencia++;
            printf("Entrou\n");

            pvetcar[i] = '-';
        }
    }
    
    for(int i = 0; i < ptammax; i++){
        
        if(pvetcar[i] == letra){
            
            excluido--;
        }
    }
    
    if(existencia == 0){

        printf("Letra Inexistente\n");
    }
    else if(excluido == 0){

        printf("Letra excluida\n");
    }
    else if(excluido == -2){

        printf("Letra não excluida\n");
    }

    return *pvetcar;
}

void printVetor(char *pvetcar, int ptammax){

    printf("Vetor: ");

    for(int i = 0; i < ptammax; i++){
    
        printf("[%c]", pvetcar[i]);
    }
}