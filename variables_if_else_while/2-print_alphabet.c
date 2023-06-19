/**
*main - Prints ==>
*a program that prints the alphabet in lowercase,
*followed by a new line.
*Return: Always 0.
*/
#include <stdio.h>
int main(void)
{
char ch = 'a';
	for (ch = 'a'; ch < 'z'; ch++)
		putchar(ch);
return (0);
}
