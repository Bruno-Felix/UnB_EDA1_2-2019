#include <stdio.h>

int main(){

    int v[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++){
        printf("v[i] = %d\n", v[i]); 
    }

    printf("---------------\n");

    for(int i = 0; i < 5; i++){
        printf("v + i = %X\n", v + i);
    }

    return 0;
}

// a expressão v[i] se volta para o valor gravado no vetor v, índice i;
// a expressão v + i se volta para o endereço de memória do vetor v, índice i;

//  v[3] -> valor inteiro gravado em v[3];
// v + 3 -> endereço de memória de v[3].