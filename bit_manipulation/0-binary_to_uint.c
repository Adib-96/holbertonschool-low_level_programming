#include "main.h"

/**
 * binary_to_uint - convert base2 to base10.
 * @b: pointer to a squeence of characters(STRING)
 * Return: the converted number, or 0 if
 * -> there is one or more chars in the string b that is not 0 or 1
 * -> b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		value = value << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			value = value | 1;
		b++;
	}
	return (value);
}
