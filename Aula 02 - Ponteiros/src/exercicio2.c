#include <stdio.h>

int main()
{
int y, *p, x; //Declaração de variáveis y, p(ponteiro) e x;
y = 0; //Inserindo 0 na variável y;                                             y = 0
p = &y; //Apontando o endereço de memória de y para ponteiro p(y);              p -> y = 0
x = *p; //Inserindo em x o conteúdo do endereço apontado pelo ponteiro p(y);    x = p -> y | x = 0
x = 4; //Inserindo 4 na variável x;                                             x = 4
(*p)++; //Incrementando o conteúdo do endereço apontado pelo ponteiro p;        (p -> y)++ | y++ | y = 1
x--; // decrementando a variável x;                                             x-- | x = 3
(*p) += x; //Adicionando o valor de x ao conteúdo do endereço apontado por p;   (p -> y) += x | y += x | 3 + 1 | y = 4
printf ("y = %d\n", y); //print do valor da variável y, que no caso será 4;     y = 4
return(0);//Return 0, fim do programam
}