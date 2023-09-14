#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a func that returns the sum of all its parameters.
 * @n: The number of paramters
 * @...:  variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list parameters;
	unsigned int i, sum = 0;

	va_start(parameters, n);

	for (i = 0; i < n; i++)
		sum += va_arg(parameters, int);

	va_end(parameters);

	return (sum);
}
