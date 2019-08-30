#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pqtde = 0;

char incluirCharNaPrimeiraPosicao(char *pvetcar, char letra, int pqtde);
char excluirCharDoVetor(char *pvetcar, char letra, int pqtde);

int main(){

    char *pvetcar;
    int ptammax;

    printf("Tamanho do vetor: ");
    scanf("%d", &ptammax);
    pqtde = ptammax;

    pvetcar = (char *) calloc(pqtde, sizeof(char));


    while(1){

        printf("\n\n------------------------------\n1 - incluir char na primeira posicao;\n");
        printf("2 - Excluir char do vetor.\n");

        int escolha;
        printf("Escolha: ");
        scanf("%d", &escolha);

        if(escolha == 1){
            system("clear");
            printf("\n\nLetra a ser acrescentada: ");
            
            setbuf(stdin, NULL);
            char letra;
            scanf("%c", &letra);

            *pvetcar =  incluirCharNaPrimeiraPosicao(pvetcar, letra, pqtde);
        }

        else if(escolha == 2){
            system("clear");
            printf("\n\nLetra a ser excluida: ");
            
            setbuf(stdin, NULL);
            char letra;
            scanf("%c", &letra);

            excluirCharDoVetor(pvetcar, letra, pqtde);
        }

        else if(escolha == 3){
            system("clear");
            printf("\n\nNúmero de elementos: \n");

            printf("Tamanho: %d\n", pqtde);
        }
    }

    free(pvetcar);

    return 0;
}

char incluirCharNaPrimeiraPosicao(char *pvetcar, char letra, int pqtde){
    
    int i = 0;
    int limite = 0;
        
    while (pvetcar[i]!='\0') {

        if((i+1) != (pqtde)){
            if((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')){
            
                printf("Letra '%c' na posicao pvetcar[%d]\n", pvetcar[i], i);
                i++;
            }
            else{
            
                break;
            }
        }
        else{
            printf("Letra '%c' na posicao pvetcar[%d]\n", pvetcar[i], i);

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

char excluirCharDoVetor(char *pvetcar, char letra, int pqtde){

    int excluido = 0;

    for(int i = 0; i < pqtde; i++){
        if(pvetcar[i] == letra){

            for (int j = i+1; j < pqtde; ++j){
                pvetcar[j-1] = pvetcar[j];  
            }
        }
    }
    
    for(int i = 0; i < pqtde; i++){
        if(pvetcar[i] == letra){
            excluido++;
        }
    }
    
    if(excluido == 0){

        printf("Letra excluido ou inexistente\n");
        pqtde--;
    }
    else{

        printf("Letra não excluida\n");
    }

    return *pvetcar;
}