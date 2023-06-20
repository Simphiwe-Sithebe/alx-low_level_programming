#include "main.h"
/**
* print_sign - Determines if the input number
* greater, equal or less tan .
*
* @x: The input numer as an integer.
*
* Return: 1 is greater than zero. Zero is 0.
* -1 is less than 0.
*/
int print_sign(int n)
{
if (n > 0)
{
 _putchar(43);
 return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n')
}
