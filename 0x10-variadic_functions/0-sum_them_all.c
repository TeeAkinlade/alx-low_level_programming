#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The parameter passed to the function.
 * @...: A variable number of parameter to calculate the sum.
 * Return: If n == 0 - 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	if (n == 0)
		return (0);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
