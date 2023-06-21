#include "main.h"

/**
*print_alphabet - Prints ==> program that use a while loop
*to generate characters
*from a..z in lower case.
*/
void print_alphabet(void)
{
int i = 97;
while (i <= 122)
{
_putchar(i);
i++;
}
_putchar('\n');
}
