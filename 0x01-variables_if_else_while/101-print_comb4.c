#include <stdio.h>
/**
*main - Prints dif combos of two numbers
*
*Return: Always 0.
*/
int main(void)
{
int k, m, n;
for (n = 48; n < 58; n++)
{
for (m = 49; m < 58; m++)
{
if (k > m && m > n)
putchar(n);
putchar(m);
putchar(k);
if (n != 55 || m != 56)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
