
#include <stdio.h>

/**
*main - Prints :
* Program that prints
*all possible combinations of single-digit numbers.
*followed by a new line.
*Numbers must be separated by ,, followed by a space
*Numbers should be printed in ascending order
*Return: Always 0.
*/
int main(void)
{
int  nu;
int comma = ',';
int escape = ' ';
for (nu = '0'; nu <= '9'; nu++)
{
putchar(nu);
if (nu == '9')
{
break;
}
putchar(comma);
putchar(escape);
}
putchar('\n');
return (0);
}

