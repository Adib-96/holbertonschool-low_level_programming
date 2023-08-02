#include "lists.h"
#include <stdio.h>
#include <string.h>
size_t print_list(const list_t *h)
{
int count = 1;
if (h->str == NULL)
{
	printf("[0] (nil)");
}
{
	printf("[%ld] %s",strlen(h->str),h->str);
}
return count;
}
