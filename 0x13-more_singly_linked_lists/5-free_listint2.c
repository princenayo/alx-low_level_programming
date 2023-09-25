#include "lists.h"

/**
 * free_listint2 - Frees a list.
 * @head: A pointer to the head of the lists.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tempNode;

	if (head == NULL)
		return;

	while (*head)
	{
		tempNode = (*head)->next;
		free(*head);
		*head = tempNode;
	}

	head = NULL;
}
