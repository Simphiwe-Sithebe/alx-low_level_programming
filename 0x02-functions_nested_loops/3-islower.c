#include "main.h"
/**
* int _islower - Shows 1 if the input is lower case else shows 0.
*
* returns: 0 or 1
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
