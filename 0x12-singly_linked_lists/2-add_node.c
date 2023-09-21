#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds a new node at the beginning of a list
  *@head: The pointer to the head of the list
  * @str: The string to be added to the new node
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[length])
		length++;

	new->len = length;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
