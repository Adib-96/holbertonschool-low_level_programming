#include "main.h"
/**
 * _puts - print a string, followed by new line.
 * @str: point to a sequence of charcters.
 * Return: output to stdout.
*/

void _puts(char *str)
{
int i;
for (i = 0 ; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
