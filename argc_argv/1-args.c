#include <stdio.h>

/**
 * main - print the number of command-line arguments
 *@argc:ARGument Count
 *@*argv:ARGument Vector
 *Return:0
*/
int main (int argc, char __attribute__((__unused__)) *argv[]) {
if(argc > 1)
	printf("%d",argc);
return (0);    
}
