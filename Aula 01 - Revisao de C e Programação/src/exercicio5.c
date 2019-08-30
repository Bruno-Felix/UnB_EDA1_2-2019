#include <stdio.h>

int main(){

    int vetor[10];
    int valorX;

    for(int i = 0; i < 10; i++){

        printf("Insira o valor de indice %d ao vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nInsira o valor X: ");
    scanf("%d", &valorX);printf("\n");

    for(int i = 0; i < 10; i++){

        if(valorX == vetor[i]){
            printf("O valor X e o indice vetor[%d] são iguais\n", i);
        }
    }

    return 0;
}