#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a linked list.
 * @head: A pointer to the head of the lists.
 *
 * Return: The sum of all the data (n) of the linked list,
 * else 0,if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *nodeA = head;

	while (nodeA != NULL)
	{
		sum += nodeA->n;
		nodeA = nodeA->next;
	}

	return (sum);
}
