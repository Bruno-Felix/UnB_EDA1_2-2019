#include <stdio.h>

void notasAluno(double *nota1, double *nota2, double *nota3);

int main(){

    double nota1, nota2, nota3;

    notasAluno(&nota1, &nota2, &nota3);
    printf("\nNOTAS:\nNota1: %0.1lf\nNota2: %0.1lf\nNota3: %0.1lf\n", nota1, nota2, nota3);

    return 0;
}

void notasAluno(double *nota1, double *nota2, double *nota3){

    printf("Nota1: "); scanf("%lf", nota1);
    printf("Nota2: "); scanf("%lf", nota2);
    printf("Nota3: "); scanf("%lf", nota3);
}