#include <stdio.h>
#include <stdlib.h>

void operacoes(double *soma, double *diferenca, double *produto, double numero1, double numero2);

int main(){

    double soma, diferenca, produto;

    double numero1, numero2;

    scanf("%lf %lf", &numero1, &numero2);

    operacoes(&soma, &diferenca, &produto, numero1, numero2);

    printf("Soma: %lf\nDiferenca: %lf\nProduto: %lf\n", soma, diferenca, produto);
    
    return 0;
}

void operacoes(double *soma, double *diferenca, double *produto, double numero1, double numero2){

    //soma:
    *soma = numero1 + numero2;

    //diferenca:
    *diferenca = numero1 - numero2;
    if(*diferenca < 0){
        *diferenca *= -1;
    }

    //produto:
    *produto = numero1 * numero2;
}