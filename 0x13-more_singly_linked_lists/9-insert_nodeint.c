#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a list.
 * @head: A pointer to the head node.
 * @idx: The index of the list where the new node will be inserted.
 * @n: The data of the new node.
 *
 * Return: The address of the new node, else- NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *newNode, *tempNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	tempNode = *head;
	for (j = 0; j < idx - 1; j++)
	{
		if (tempNode == NULL)
		{
			free(newNode);
			return (NULL);
		}
		tempNode = tempNode->next;
	}

	newNode->next = tempNode->next;
	tempNode->next = newNode;

	return (newNode);
}
