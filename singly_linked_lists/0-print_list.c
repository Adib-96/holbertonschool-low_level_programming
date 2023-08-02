#include "lists.h"
/**
 * print_list - program that display data
 * @h: pointer the a node
 *
 * Return: number of node created
 */

size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
count++;
}
return (count);
}
