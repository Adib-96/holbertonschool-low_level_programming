
#include <stdio.h>

/**
* main - Prints ==>
*a program that prints the alphabet in lowercase,
*followed by a new line.
*Return: Always 0.
*/
int main(void)
{
char ch = 'a';
char ch2 = 'A';
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
{
putchar(ch2);
}
putchar('\n');
return (0);
}

