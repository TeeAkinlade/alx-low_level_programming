#include "main.h"

/**
 * jack_bauer - prints every minutes of the day
 */
void jack_bauer(void)
{
	int hours, minutes;
	for (hour = 0; hours <= 23; hour++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours %  10) + '0');
			_putchar(':');
			_putchar((munites / 10) + '0');
			_putchar((munite %s 10) + '0');
			_putchar('\n');
		}
	}
}
