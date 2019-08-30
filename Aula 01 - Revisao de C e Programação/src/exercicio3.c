#include <stdio.h>

int main(){

    int valorA, valorB;
    int resultadoSoma = 0;
    
    printf("Valor A: "); 
    scanf("%d", &valorA);

    printf("Valor B: ");
    scanf("%d", &valorB);

    if(valorB > valorA){
        int aux = valorB;
        valorB = valorA;
        valorA = aux;
    }

    for(int i = valorB; i <= valorA; i++){
        resultadoSoma += i;
    }

    printf("\nValor da Soma: %d\n", resultadoSoma);

    return 0;
}