#include <stdio.h>
/**
*main - Prints the alhabet
*
*Return: Always 0.
*/
int main(void)
{
char alp[52]="abcdefghijklmopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i=0; i<52; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
