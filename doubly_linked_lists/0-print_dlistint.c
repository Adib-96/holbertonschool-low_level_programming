#include "lists.h"
/**
 *print_dlistint - Print list
 *@h: pointer to node
 *Return:the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *node = h;
size_t len = 0;
while (node)
{
printf("%d\n", node->n);
len++;
node = node->next;
}
return (len);
}
