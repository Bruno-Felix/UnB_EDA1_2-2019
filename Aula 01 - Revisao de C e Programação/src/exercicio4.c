#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main(){

    char gabarito[2] = {'S'}, decisao[2];
    char numeroDeCalculos = 0;
    
    do{
        int valorA, valorB;
        int resultadoDivisao;

        system("clear");
        printf("\nDigite Novamente o Valor A: ");
        scanf("%d", &valorA);
        printf("Digite Novamente o Valor B: ");
        scanf("%d", &valorB);

        while(valorB == 0){
            
            printf("VALOR INVÁLIDO, Digite Novamente o Valor B: ");
            scanf("%d", &valorB);
        }

        resultadoDivisao = valorA/valorB;
        printf("\nResultado da Divisão: %d\n", resultadoDivisao);

        numeroDeCalculos++;

        printf("\nVOCÊ DESEJA OUTRO CÁLCULO (S/N)? ");
        scanf("%s", decisao);

    }while(strcmp(decisao, gabarito) == 0);

    printf("Numero de Calculos feitos: %d\n", numeroDeCalculos);
    
    return 0;
}