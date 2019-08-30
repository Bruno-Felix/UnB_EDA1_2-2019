#include <stdio.h>

int funcaoRazao(double *razao, double numero1, double numero2);

int main(){

    double razao;
    int possivel;

    double numero1, numero2;

    scanf("%lf %lf", &numero1, &numero2);

    possivel = funcaoRazao(&razao, numero1, numero2);

    if(possivel == 1){
        if(numero1 > numero2){

            printf("Razao: Número %.1lf é %.1lf vezes maior que %.1lf\n", numero1, razao, numero2);
        }
        else if(numero1 == numero2){

            printf("Os números são iguais\n");
        }
        else{

            printf("Razao: Número %.1lf é %.1lf vezes menor que %.1lf\n", numero1, razao, numero2);
        }
        
    }
    else{

        printf("Impossível fazer operacão\n");
    }

    return 0;
}

int funcaoRazao(double *razao, double numero1, double numero2){

    //Retorno da Possibilidade:
    if(numero2 == 0){

        return 0;
    }
    else{
        //Razao:
        *razao = numero1/numero2;
        
        return 1;
    }
}