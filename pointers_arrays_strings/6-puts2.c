#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * @str: string to be filtered
*/

void puts2(char *str)
{
int i;
int len = 0;
while (str[len])
{
len++;
}
for (i = 0; i <= len; i++)
{
if (str[i] % 2 == 0)
{
_putchar(str[i]);
continue;
}
}
_putchar('\n');
}
