#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t numb = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		numb++;
		h = h->next;
	}

	return (numb);
}
