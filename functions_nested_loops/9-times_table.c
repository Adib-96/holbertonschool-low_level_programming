

#include "main.h"
/**
* times_table - Prints the 9 times table, starting with 0.
*/
void times_table(void)
{
int i;
int j;
int multi;
for (i = 0; i <= 9; i++)
{
_putchar('0');
for (j = 1; j <= 9; j++)
{
_putchar(',');
_putchar(' ');
multi = j * i;
if (multi <= 9)
_putchar(' ');
else
_putchar((multi / 10) + '0');
_putchar((multi % 10) + '0');
}
_putchar('\n');
}
}
