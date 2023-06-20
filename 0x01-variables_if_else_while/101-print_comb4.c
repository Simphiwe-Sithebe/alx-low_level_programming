#include <stdio.h>
/**
*main - Prints dif combos of two numbers
*
*Return: Always 0.
*/
int main(void)
{
int l, m, n;
for (n = 48; n < 58; n++)
{
for (m = 49; m < 58; m++)
{
if (int l > m && m > n)
putchar(n);
putchar(m);
putchar(l);
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
