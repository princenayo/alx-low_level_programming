#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function on each element of the array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: the function pointer to be used
 *Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
