#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @i: The number to be checked.
 * Return: last digit in a number sequence.
 */
int print_last_digit(int i)
{
int last_digit = i % 10;
if (last_digit < 0)
{
last_digit *= -1;
}
_putchar(last_digit + '0');
return (last_digit);
}
