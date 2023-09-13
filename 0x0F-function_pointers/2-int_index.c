#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array using a function pointer
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: the function pointer to use for comparison
 * Return: the index of the first element that matches, or -1 if none or error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1)
}
