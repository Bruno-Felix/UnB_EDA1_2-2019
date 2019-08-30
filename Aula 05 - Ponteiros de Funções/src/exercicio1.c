#include <stdio.h>

int soma(int num1, int num2);
int subtracao(int num1, int num2);
int multiplicacao(int num1, int num2);
int divisao(int num1, int num2);
int resto(int num1, int num2);


int main(){

    int (*funcao[5])(int, int) = {soma, subtracao, multiplicacao, divisao, resto};
               //entradaFuncao = { 0,       1,           2,          3,      4  }

    int num1, num2;
    int entradaFuncao;

    printf("Número1: "); scanf("%d", &num1);
    printf("Número2: "); scanf("%d", &num2);
    printf("Operação: "); scanf("%d", &entradaFuncao);

    int resultado = (*funcao[entradaFuncao])(num1, num2);

    printf("\n  Resultado: %d\n", resultado);

    return 0;
}

int soma(int num1, int num2){

    int returnResultado = num1 + num2;

    return returnResultado;
}

int subtracao(int num1, int num2){

    int returnResultado = num1 - num2;

    return returnResultado;
}

int multiplicacao(int num1, int num2){

    int returnResultado = num1 * num2;

    return returnResultado;
}

int divisao(int num1, int num2){

    int returnResultado = num1/num2;

    return returnResultado;
}

int resto(int num1, int num2){

    int aux = divisao(num1, num2);
    int returnResultado = num1 - (num2*aux);

    return returnResultado;
}