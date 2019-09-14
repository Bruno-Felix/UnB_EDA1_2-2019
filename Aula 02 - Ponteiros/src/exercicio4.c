#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int i = 10, j = 20;
int temp;
int *p1 , * p2 ;
p1 = &i ;
p2 = &j ;
temp = *p1 ;
*p1 = *p2 ;
*p2 = temp ;
printf ( " %d %d \n" , i , j ); 
//print:   20 10                                
return 0;
}