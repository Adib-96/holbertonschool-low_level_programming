#include "main.h"
/**
 * print_rev - Program that reverse a string.
 * @s: pointer point to a sequence of chars.
 * Return: reversed string.
*/
void print_rev(char *s)
{
int length, i;
for (length = 0 ; s[length] != '\0'; ++length)
;
for (i = length - 1; i >= 0 ; --i)
{
_putchar(s[i]);
}
_putchar('\n');
}

