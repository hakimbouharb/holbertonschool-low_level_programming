#include"lists.h"
/**
*add_node_end - function that add new node in the end of the linked lis
*@head: the head of the linked list
*@str: the char to add in next node
*Return: the linked list
**/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
char *duplicate = strdup(str);
list_t *current = *head;
if (!new)
return (NULL);
if (duplicate == NULL)
{
free(new);
return (NULL);
}
new->str = duplicate;
new->len = strlen(duplicate);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (current->next)
current = current->next;
current->next = new;
return (new);
}
