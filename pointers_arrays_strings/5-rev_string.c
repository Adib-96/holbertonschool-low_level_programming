#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string to be reversed
*/
void rev_string(char *s)
{
char tmp;
int i, len, index;
len = 0;
index = 0;
while (s[len] != '\0')
{
len++;
}
index = len - 1;
for (i = 0; i < len / 2; i++)
{
tmp = s[i];
s[i] = s[index];
s[index--] = tmp;
}
}
