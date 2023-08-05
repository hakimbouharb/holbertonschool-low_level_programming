#include"lists.h"
/**
*free_list - function that free a linked list
*@head: the linked list
*Return: nothing
*
**/
void free_list(list_t *head)
{
list_t *current;
while (head != NULL)
{
current = head->next;
free(head->str);
free(head);
head = current;
}
}
