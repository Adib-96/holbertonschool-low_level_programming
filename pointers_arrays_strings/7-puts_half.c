#include "main.h"

/**
 * puts_half - print half of a string
 * @str: pointer to a string
*/
void puts_half(char *str)
{
int len = 0;
int i;
while (str[len] != '\0')
{
len++;
}
for (i = (len - 1) / 2; i <= len - 1; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

