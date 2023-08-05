#include"lists.h"
/**
*dlistint_len - Function that return the number of node in linked list
*@h: the linked list
*Return: number of node
**/
size_t dlistint_len(const dlistint_t *h)
{
size_t node = 0;
while (h != NULL)
{
node++;
h = h->next;
}
return (node);
}
