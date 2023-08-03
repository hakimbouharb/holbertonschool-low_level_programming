#include"lists.h"
/**
*add_node - function that  add a new node
*@head: the head node
*@str: the new str that we should add in the head
*Return: the adresse on the new element
**/
list_t *add_node(list_t **head, const char *str)
{
char *duplicate = strdup(str);
list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
if (duplicate == NULL)
{
free(new_node);
return (NULL);
}
new_node->str = duplicate;
new_node->len = strlen(duplicate);
new_node->next = *head;
*head = new_node;
return (new_node);
}
