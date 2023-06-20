#include "main.h"
/**
* print_last_digit - Prints the last digit
* of a number.
*
* @n: Input number as integer.
*
* Return: Last digit.
*/
int print_last_digit(int n)
{
int l;
l = n % 10;
if (n < 0)
{
_putchar(-l + 48);
return (-l);
}
else
{
_putchar(l + 48);
return (l);
}
}
