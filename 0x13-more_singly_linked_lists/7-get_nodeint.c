#include "lists.h"

/**
 * get_nodeint_at_index - returns an nth  node of a linked list.
 * @head: A pointer to the head of the lists.
 * @index: The index of the node, starts at 0.
 *
 * Return: If the node does not exist- NULL,
 *   else - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index; j++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
