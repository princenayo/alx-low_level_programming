#include "lists.h"

/**
 * reverse_listint - Reverses a  list.
 * @head: A pointer to the head node.
 *
 * Return: The pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL, *next;

	if (*head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = next;
	}

	(*head)->next = first;

	return (*head);
}
