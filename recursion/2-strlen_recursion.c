#include "main.h"

/**
 * _strlen_recursion - Length of the string
 * @s: string to be checked
 * Return: the length of the string
*/

int _strlen_recursion(char *s)
{
if (*s == '\n')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
