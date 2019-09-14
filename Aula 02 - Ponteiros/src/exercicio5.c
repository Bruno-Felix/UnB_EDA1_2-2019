#include <stdio.h>
#include <stdlib.h>

int numeroDeEmpresas = 4;

void criarVetorFaturamento(double *vFat);
void printarVetorFaturamento(double *vFat);


int main(){

    double *vFat = (double *) calloc(numeroDeEmpresas, sizeof(double));

    criarVetorFaturamento(vFat);
    printarVetorFaturamento(vFat);

    return 0;
}


void criarVetorFaturamento(double *vFat){

    double auxVetor[numeroDeEmpresas];

    printf("Insira o Faturamento das 4 Empresas:\n\n");

    for(int i = 0 ; i < numeroDeEmpresas; i++){
        
        printf("Empresa %d(Em R$): ", i + 1);
        scanf("%lf", &auxVetor[i]);

        vFat[i] = auxVetor[i];
    }
}

void printarVetorFaturamento(double *vFat){

    printf("\nFaturamentos: \n\n");

    for(int i = (numeroDeEmpresas - 1); i >= 0; i--){

        printf("Empresa %d: R$ %.2lf | Endereço de Memória: %X\n", i + 1, vFat[i], &vFat[i]);
    }
}