#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - function that print to stdout
*@name: name to print
*@f:pointer that point to a function
*/
void print_name(char *name, void(*f)(char *))
{
if (!name || !f)
return;
f(name);
}
