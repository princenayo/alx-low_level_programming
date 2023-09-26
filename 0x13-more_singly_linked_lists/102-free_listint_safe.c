#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 *                      in a looped  linked list.
 * @head: A pointer to the head of the lists.
 *
 * Return: If the list failed to be looped - 0.
 *   else - return the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *first, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	first = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (first == hare)
		{
			first = head;
			while (first != hare)
			{
				nodes++;
				first = first->next;
				hare = hare->next;
			}

			first = first->next;
			while (first != hare)
			{
				nodes++;
				first = first->next;
			}

			return (nodes);
		}

		first = first->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a list safely - can free lists containing loops)
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function that sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *new;
	size_t numb, idx;

	numb = looped_listint_count(*h);

	if (numb == 0)
	{
		for (; h != NULL && *h != NULL; numb++)
		{
			new = (*h)->next;
			free(*h);
			*h = new;
		}
	}

	else
	{
		for (idx = 0; idx < numb; idx++)
		{
			new = (*h)->next;
			free(*h);
			*h = new;
		}

		*h = NULL;
	}

	h = NULL;

	return (numb);
}
