#include "lists.h"


/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *temp = *head;
list_t *newNode;

while (str[len])
{
len++;
}
newNode = malloc(sizeof(list_t));
if (!newNode)
{
return (NULL);
}
newNode->len = len;
newNode->str = strdup(str);
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
return (newNode);
}
while (temp->next)
{
temp = temp->next;
}
temp->next = newNode;
return (newNode);
}
