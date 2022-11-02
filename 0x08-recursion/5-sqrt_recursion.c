#include "main.h"
/**
 * _sqrt_recursion - to find squar root
 * @n: the number
 * Return: i, i + 1 or sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else if (n >1)
	{
		return (_increasevar(1, n));
	}
	return (-1);
}
