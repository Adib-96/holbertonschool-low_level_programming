
#include <stdio.h>

/**
*main - Prints ==>
* Program that prints
*all possible combinations of single-digit numbers.
*followed by a new line.
*-Numbers must be separated by ,, followed by a space
*-Numbers should be printed in ascending order
*Return: Always 0.
*/
int main(void)
{
char  nu;
char comma = ',';
char escape = ' ';
for (nu = '0'; nu <= '9'; nu++)
{
putchar(nu);
putchar(escape);
putchar(comma);
}
putchar('\n');
return (0);
}

