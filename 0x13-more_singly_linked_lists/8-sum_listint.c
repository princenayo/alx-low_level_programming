#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the
 *               data (n) of the list.
 * @head: A pointer to the head of the list.
 *
 * Return: If the list is empty - NULL
 *    else - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
