#include <stdio.h>
#include <string.h>

int main(){

    char palavra[101];
    int tamanhoPalavra;
    printf("\nInsira uma palavra: ");
    scanf("%s", palavra);

    tamanhoPalavra = strlen(palavra);

    printf("\n\tPrimeira letra da palavra: %c\n", palavra[0]);
    printf("\tUltima letra da palavra: %c\n", palavra[tamanhoPalavra-1]);
    printf("\tNumero de letras da palavra: %d\n\n", tamanhoPalavra);

    return 0;
}