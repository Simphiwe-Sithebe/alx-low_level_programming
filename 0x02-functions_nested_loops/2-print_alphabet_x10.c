#include "main.h"
/**
* print_alphabet_x10 - Prints out alphabet in lower case 10 times.
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int i;
int x;
for (i = 0; i < 10; i++)
{
for ( x = 97; x <= 122; x++)
{
_putchar(x);
}
}
_putchar('\n');
}
