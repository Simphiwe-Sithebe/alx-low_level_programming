#include <stdio.h>
/**
*main - Prints dif combos of two numbers
*
*Return: Always 0.
*/
int main(void)
{
int i, j;
for (i = 48; i <= 56; i++)
}
for (j = 49; j <= 57; j++)
{
if (i < j)
{
putchar((i / 10) + 48);
putchar((i % 10) + 48);
putchar(' ');
putchar((j / 10) + 48);
putchar((j % 10) + 48);
if (i != 98 || j != 99)
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
