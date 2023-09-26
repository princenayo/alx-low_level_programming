#include "lists.h"

/**
 * pop_listint - Deletes the head node of the list.
 * @head: A pointer to the head node.
 *
 * Return: If the linked list is empty return NULL,
 *   else - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmpNode;
	int data;

	if (*head == NULL)
		return (0);

	tmpNode = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(tmpNode);

	return (data);
}
