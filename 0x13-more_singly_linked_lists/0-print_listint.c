#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of the list.
 * @h: A pointer to the head node in the list
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numb++;
	}

	return (numb);
}
