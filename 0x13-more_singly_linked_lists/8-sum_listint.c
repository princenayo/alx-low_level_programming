#include "lists.h"

/**
* sum_listint - Sums all the data(n) of the lists.
* @head: A pointer to the head of the lists.
*
* Return: The sum of the data(n)
* else - NULL, if the list is empty.
*/


int sum_listint(listint_t *head);
{

	int sum = 0;
	listint_t *nodeA;

	*nodeA = head;

	while (nodeA != NULL)
	{
		sum += nodeA->n;
		nodeA = nodeA->next;
	}

	return (sum);
}
