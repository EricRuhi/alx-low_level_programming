#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14; 10 times.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int count, j;

	for (count = 0; count <= 9; count++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
