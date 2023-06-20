#include <stdio.h>
/**
*main - Prints numbers from 0-9 and letters between a to f.
*
*Return: Always 0.
*/
int main(void)
{
int i;
for (i = 48; i < 57; i++)
{
putchar(i);
}
for (i = 97; i < 102; i++)
{
putchar(i);
}
putchar(i);
return (0);
}
