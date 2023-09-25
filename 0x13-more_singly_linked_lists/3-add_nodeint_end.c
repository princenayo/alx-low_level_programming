#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of list
 *
 * @head: A pointer to the head of the list
 *
 * @n: The integer for the new node to store.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tempNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	else
	{
		tempNode = *head;
		while (tempNode->next != NULL)
			tempNode = tempNode->next;
		tempNode->next = newNode;
	}

	return (*head);
}
