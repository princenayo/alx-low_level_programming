#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - returns the number of elements of a list
  * @h: The pointer to the head of the list
  *
  * Return: The number of elements of a list
  */
size_t list_len(const list_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		h = h->next;
		numb++;
	}

	return (numb);
}
