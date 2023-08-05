#include"lists.h"
/**
*print_dlistint - Fucntion that prints all elements of linked list
*@h: linked list
*Return: nomber of nodes
*
**/
size_t print_dlistint(const dlistint_t *h)
{
size_t size = 0;
while (h != NULL)
{
size++;
printf("%d\n", h->n);
h = h->next;
}
return (size);
}
