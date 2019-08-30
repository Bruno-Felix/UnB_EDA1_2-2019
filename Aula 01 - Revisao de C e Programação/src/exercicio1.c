#include <stdio.h>

int main(){

    double grausFahrenheit, grausCelsius;

    printf("\nInsira a temperatura graus em Fahrenheit: ");
    scanf("%lf", &grausFahrenheit);

    grausCelsius = (grausFahrenheit - 32)/9;

    printf("Temperatura em graus Celsius: %.1lf\n\n", grausCelsius * 5);

    return 0;
}