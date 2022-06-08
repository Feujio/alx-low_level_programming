#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, n, first_digit_n, last_digit_n;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		for (j = 1; j <= 9; j++)
		{
			if (i == 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0');
				if (j == 9)
					continue;
				_putchar(',');
			} else
			{
				n = i * j;
				_putchar(' ');
				last_digit_n = n % 10;
				first_digit_n = n / 10;
				if (!first_digit_n)
					_putchar(' ');
				else
					_putchar(first_digit_n + '0');
				_putchar(last_digit_n + '0');
				if (j == 9)
					continue;
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
