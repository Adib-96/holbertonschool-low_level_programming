#include "main.h"
/**
 *print_array - print elements of an array
 *@a: point to an array
 *@n: length of an array
*/
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
if (n - i == 1)
{
printf("%d", a[i]);
break;
}
printf("%d", a[i]);
i++;
}
}
