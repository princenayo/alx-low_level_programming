#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of lists
 *
 * @head: A pointer to the head of the lists.
 *
 * @n: The integer for the new node to store.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
