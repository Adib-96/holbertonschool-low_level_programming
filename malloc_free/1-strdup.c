#include <stdlib.h>
#include  "main.h"


/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
char *dup;
int len, i;
len = 0;
i = 0;
if (str == NULL)
{
return (NULL);
}
while (str[len])
{
len++;
}
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
{
return (NULL);
}
for (i = 0; i != '\0'; i++)
{
dup[i] = str[i];
}
return (dup);
}
