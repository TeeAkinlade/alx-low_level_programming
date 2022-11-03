#include "main.h"
/**
 * _sqrt_recursion - to find squar root
 * @n: the number
 * Return: i, i + 1 or sqrt
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_sqrt_recursion(i + 1, n));
	else if (i * 1 == n)
		return (i);
	return (-1);
	return (-1);
}
