#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head node of the lists.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node;
	size_t numb = 0;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		numb++;
		printf("[%p] %d\n", (void *)node, node->n);
		if (node <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}

	return (numb);
}
