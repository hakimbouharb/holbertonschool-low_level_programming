#include"lists.h"
/**
*list_len - function that returns number of elements in the linked list
*@h: the linked list
*Return: number of element
*
**/
size_t list_len(const list_t *h)
{
size_t length = 0;
while (h != NULL)
{
length++;
h = h->next;
}
return (length);
}
