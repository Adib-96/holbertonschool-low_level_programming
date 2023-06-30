#include "main.h"
#include <stdio.h>
/**
 *print_array - print elements of an array
 *@a: point to an array
 *@n: length of an array
*/
void print_array(int *a, int n)
{
if (!(n < 0))
{
int i = 0;
while (i < n)
{
if (n - i == 1)
{
printf("%d", a[i]);
printf("%c", '\n');
break;
}
printf("%d, ", a[i]);
i++;
}
}
}
