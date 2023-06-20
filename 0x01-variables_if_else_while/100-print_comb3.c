#include <stdio.h>
/**
*main - Prints dif combos of two numbers
*
*Return: Always 0.
*/
int main(void)
{
int n, m;
for (n = 48; n <= 56; n++)
{
for (m = 49; m <= 57; m++)
{
if (m > n)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
