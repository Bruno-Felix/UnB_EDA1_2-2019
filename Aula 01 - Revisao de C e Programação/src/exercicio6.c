#include <stdio.h>
#include <stdlib.h>

void menuEscolha();

int main(){

    int vetor[5];
    int escolha;

    printf("\nCriando Vetor:\n\n");
    for(int i = 0; i < 5; i++){
        printf("Insira o valor no vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    system("clear");


    do{ 
        printf("\n\n----------------------\nVetor: [%d][%d][%d][%d][%d]\n----------------------\n\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);    
        menuEscolha();
        printf("Escolha: ");
        scanf("%d", &escolha);
        
        if(escolha == 1){

            int valor, posicao;
            system("clear");
            printf("\n\tInsira o valor a ser acrescentado: ");
            scanf("%d", &valor);
            printf("\tInsira a posicao em que o valor sera acrescentado: ");
            scanf("%d", &posicao);

            vetor[posicao] = valor;
        }

        else if(escolha == 2){
            
            int posicao;
            system("clear");
            printf("\n\tInsira a posicao que tera seu valor excluido: ");
            scanf("%d", &posicao);

            vetor[posicao] = -1;

            for(int i = 0; i < 5; i++){
                if(vetor[i] == -1 && i != 4){
                    int aux = vetor[i+1];
                    vetor[i+1] = vetor[i];
                    vetor[i] = aux;
                }
            }
        }
        else if(escolha == 3){
           
            int valor;
            system("clear");
            printf("\n\tInsira o valor a ser encontrado: ");
            scanf("%d", &valor);

            int valorEncontrado = -1;
            for(int i = 0; i < 5; i++){

                if(valor == vetor[i] && valor != -1){
                    valorEncontrado = i;
                }
            }

            if(valorEncontrado != -1){
                printf("\n\tValor se encontra na posicao: vetor[%d]\n", valorEncontrado);
            }
            else{
                printf("\n\tValor inexistente\n");
            }
        }
        else if(escolha == 4){
            system("clear");
            printf("\n\tPrograma Encerrado\n\n");
        }

    }while(escolha !=4);

    return 0;
}

void menuEscolha(){
    printf("\t\tMENU\n");
    printf("1 - Inserir um valor inteiro na posição k (0≤𝑘≥4);\n");
    printf("2 - Excluir o elemento da posição k (0≤𝑘≥4);\n");
    printf("3 - Encontre um valor no Vetor;\n");
    printf("4 - Sair do Programa.\n\n");
}