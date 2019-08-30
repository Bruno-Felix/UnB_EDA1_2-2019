#include <stdio.h>

int main(){

    double numeroA, numeroB, numeroC;
    
    printf("\nNumero A: ");
    scanf("%lf", &numeroA);
    printf("Numero B: ");
    scanf("%lf", &numeroB);
    printf("Numero C: ");
    scanf("%lf", &numeroC);

    if(numeroC > numeroA){
        int aux = numeroC;
        numeroC = numeroA;
        numeroA = aux;
    }
    else if(numeroC > numeroB){
        int aux = numeroC;
        numeroC = numeroB;
        numeroB = aux;
    }

    printf("\nSoma = %.1lf\n", numeroA + numeroB);

    return 0;   
}
