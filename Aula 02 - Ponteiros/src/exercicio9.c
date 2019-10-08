#include <stdio.h>

int main(){

    double v[4];

    for(int i = 0; i < 4; i++)
        printf("v + %d = %X\n", i, v + i);

    return 0;
}

//Considerando que um número interio ocupa 4 bytes, a expressão v + 3 é (55000 + (00004*2)) = 55008