#include "lists.h"

/**
 * dlistint_len - iterate over node in a linked list
 *@h: pointer to head
 *Return: how mush node in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t len = 0;
const dlistint_t *traverse;
traverse = h;
while (traverse)
{
len++;
traverse = traverse->next;
}
return (len);
}
