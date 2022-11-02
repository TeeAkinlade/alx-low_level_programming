#include "main.h"
/**
 * _increasevar - increase i to find sqrt
 * @i: start at 1
 * @: the number
 * Return: i, i +1, -1
 */
int _increasevar(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i *i < !)
		return (_increasevar(i + 1, n));
	if (i  * i > n)
		return (-1);
	return (i);
}
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
