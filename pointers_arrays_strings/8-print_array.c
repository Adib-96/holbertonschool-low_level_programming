#include "main.h"
#include <stdio.h>
/**
 *print_array - print elements of an array
 *@a: point to an array
 *@n: length of an array
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i == 0)
printf("%d", a[i]);
else
printf(", %d", a[i]);
}
printf("\n");
}
