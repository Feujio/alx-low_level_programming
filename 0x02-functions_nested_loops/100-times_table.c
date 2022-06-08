#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the @n times table, starting with 0
 * @n: integer
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j, x, first_digit_x, last_digit_x;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			_putchar(',');
			for (j = 1; j <= n; j++)
			{
				if (i == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0');
					if (j == n)
						continue;
					_putchar(',');
				} else
				{
					x = i * j;
					if (x < 100)
					{
						_putchar(' ');
						_putchar(' ');
						last_digit_x = x % 10;
						first_digit_x = x / 10;
						if (!first_digit_x)
							_putchar(' ');
						else
							_putchar(first_digit_x + '0');
						_putchar(last_digit_x + '0');
					} else
					{
						_putchar(' ');
						_putchar((x / 100) + '0');
						_putchar(((x / 10) % 10) + '0');
						_putchar((x % 10) + '0');
					}
					if (j == n)
						continue;
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
