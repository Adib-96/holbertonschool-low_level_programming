#include "main.h"

/**
 * puts_half - print half of a string
 * @str: pointer to a string
*/
void puts_half(char *str)
{
int len = 0;
int i, j;
while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
for (i = len / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else
{
for (j = (len - 1) / 2; j < len - 1; j++)
{
_putchar(str[j + 1]);
}
}
_putchar('\n');
}

