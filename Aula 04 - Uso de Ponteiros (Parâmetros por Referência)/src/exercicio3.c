#include <stdio.h>
#include <stdlib.h>
int tamanho = 5;

double funcaoMedia(int *vetor, int *valorMenor, int *valorMaior);

int main(){

    double media; 
    int valorMenor, valorMaior;

    int vetor[] = {8, 4, 3, 2, 10};
    
    media = funcaoMedia(vetor, &valorMenor, &valorMaior);

    printf("Média: %0.1lf\nMenor Valor: %d\nMaior Valor: %d\n", media, valorMenor, valorMaior);

    return 0;
}

double funcaoMedia(int *vetor, int *valorMenor, int *valorMaior){
    
    //Media:
    int auxTotal = 0;
    double auxMedia;
    
    for(int i = 0; i < tamanho; i++){

        auxTotal += vetor[i];
    }
    
    auxMedia = auxTotal/tamanho;

    //Menor Valor:
    *valorMenor = vetor[0];

    for(int i = 0; i < tamanho; i++){
        
        if(*valorMenor > vetor[i]){
            
            *valorMenor = vetor[i];
        }
    }

    //Maior Valor:
    *valorMaior = vetor[0];

    for(int i = 0; i < (tamanho - 1); i++){
        
        if(*valorMaior < vetor[i]){
            
            *valorMaior = vetor[i];
        }
    }

    return auxMedia;
}