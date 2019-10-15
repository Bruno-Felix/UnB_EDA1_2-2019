#include <stdio.h>
#include <stdlib.h>


void questaoA(int *v, int *n);


int main(){
    
    int *v;
    int *n = (int *) calloc(1, sizeof(int));

    questaoA(v, n);
    printf("%d\n", *n);

    return 0;
}

void questaoA(int *v, int *n){

    printf("Insira n: ");
    scanf("%d", n);

    v = (int *) calloc(*n, sizeof(int));

    for(int i = 0; i < *n; i++){
        scanf("%d", v[i]);
    }
}