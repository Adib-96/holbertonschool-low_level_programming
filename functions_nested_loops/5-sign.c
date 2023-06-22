#include "main.h"

/**
 * print_sign - Checks for alphabetic character.
 * @n: The integer to be checked.
 * Return: 1 if the number is positive
 * -1 if the number is negative, 0 otherwise.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
{
}
}
