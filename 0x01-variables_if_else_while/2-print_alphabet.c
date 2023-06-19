#include <stdlib.h>
#include <stdio.h>
/**
*main - prints the alphabet
*
*Return: always 0.
*/
int main(void)
{
char alp[27] = " abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0 ; i < 26 ; i++)
{
putchar(alp[i]);
}

return (0);
}
