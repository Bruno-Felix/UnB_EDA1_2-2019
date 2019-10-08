#include <stdio.h>

char * acheSobrenome (char nome [])
{
char * pnome ;
int i = 0;
while ( nome [ i ] != ' ')
{
i ++;
}
i ++;
printf("%d\n", i);
pnome = (char*) calloc (80 - i, sizeof(char)); //COMPLETE AQUI
return pnome;
}

int main (void)
{
char nomeCompleto [80];
char *p ;
puts ( "Entre com o seu nome e um sobrenome:" );
gets (nomeCompleto );
p = acheSobrenome (nomeCompleto);
puts ( p );
return 0;
}