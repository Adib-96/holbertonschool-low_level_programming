#include <stdio.h>

/**
 * main - print the number of command-line arguments
 *@argc:ARGument Count
 *@argv:ARGument Vector
 *Return:0
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
if (argc > 1)
	printf("%d\n", argc - 1);
else
	printf("%d\n", 0);
return (0);
}
