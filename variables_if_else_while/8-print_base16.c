
#include <stdio.h>

/**
*main - Prints ==>
* Program that prints
*all the numbers of base 16 in lowercase
*followed by a new line.
*Return: Always 0.
*/
int main(void)
{
char  nu;
char alpha;
for (nu = '0'; nu <= '9'; nu++)
{
putchar(nu);
}
for (alpha = 'a'; alpha <= 'f'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}

