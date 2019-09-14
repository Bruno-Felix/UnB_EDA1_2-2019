#include <stdio.h>

main()
{
float vet[5] = {1.1,2.2,3.3,4.4,5.5}; //Declaração do vetor float vet[5];
float *f; //Declaração do ponteiro f;
int i; //Declaração da variável i;
f = vet; //Apontando o ponteiro f para o vet
printf("contador/valor/valor/endereco/endereco"); //print do cabeçalho
for(i = 0 ; i < 5 ; i++) //Laço de repetição de 0 a 4;
{
printf("\ni = %d",i); //print variável i;
printf(" vet[%d] = %.1f",i, vet[i]); //print da variável i e o valor do vet[i];
printf(" *(f + %d) = %.1f",i, *(f+i)); //print da variável i e valor da variável apontada pelo ponteiro *f + i (vet[i]);
printf(" &vet[%d] = %X",i, &vet[i]); //print da variável i e o endereço de memória do vet[i];
printf(" (f + %d) = %X",i, f+i); // print da variável i e o endereço de memória de f + i (apontado para a variável vet[i])
}
} //Fim do programa.