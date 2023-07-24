#include "variadic_functions.h"


/**
 *print_numbers - prints numbers, followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *@...:args
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int i;
va_start(ptr, n);
for (i = 0; i < n - 1; i++)
{
if (separator == NULL)
{
continue;
}
printf("%d%c ", va_arg(ptr, int),*(separator));
}
printf("%d", va_arg(ptr, int));
putchar('\n');
va_end(ptr);
}
