#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: A pointer to the head of list
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
