#include <stdio.h>
#include <stdlib.h>

int main (){

    double auxVet[4];

    double *vFat = auxVet;

    for(int i = 0; i < 4; i++){
        printf("Insira o Faturamento da Empresa %d: ", i + 1);
        scanf("%lf", &vFat[i]);
    }

    for(int j = 3; j >= 0; j--){

        printf("Empresa %d: R$ %.2lf | Endereço de Memória: %X\n", j + 1, *(vFat + j), vFat + j);
    }

    return 0;
}