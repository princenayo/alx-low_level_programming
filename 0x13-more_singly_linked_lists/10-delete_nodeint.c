#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a list.
 * @head: A pointer to the head node.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *current, *tmp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	current = *head;
	for (k = 0; k < index - 1; k++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	tmp = current->next;
	current->next = tmp->next;
	free(tmp);

	return (1);
}
