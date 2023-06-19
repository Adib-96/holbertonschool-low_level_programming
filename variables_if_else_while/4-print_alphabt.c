
#include <stdio.h>

/**
* main - Prints ==>
*a program that prints the alphabet in lowercase,
*followed by a new line.
*Return: Always 0.
*/
int main(void)
{
int ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'q' || ch == 'e')
{
continue;
}
else
{
putchar(ch);
}
}
putchar('\n');
return (0);
}

