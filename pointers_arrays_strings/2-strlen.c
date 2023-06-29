#include "main.h"


/**
 * _strlen - return the length of a string.
 * @s: pointer to a string.
 * Return: the lentgh of a string.
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0' ; ++i)
;
return (i);
}
