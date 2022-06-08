#include <stdio.h>
#include "main.h"

void print_digit_by_digit(int x, int y, int z, int t);

/**
 * print_times_table - prints the @n times table, starting with 0
 * @n: integer
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	} else if (n == 100)
		_putchar(0);
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
					print_digit_by_digit(' ', ' ', ' ', 0);
					if (j == n)
						continue;
					_putchar(',');
				} else
				{
					x = i * j;
					if (x < 100)
						print_digit_by_digit(' ', ' ', (!(x / 10) ? ' ' : (x / 10)), x % 10);
					else if (x >= 100 && x < 1000)
						print_digit_by_digit(' ', (x / 100), ((x / 10) % 10), x % 10);
					if (j == n)
						continue;
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}

/**
 * print_digit_by_digit - prints digit by digit a given number
 * @x: integer, the first single character digit to be print
 * @y: integer, the second digit or ' ' character
 * @z: integer, the third digit or ' ' character
 * @t: integer, the last character
 *
 * Return: Nothing
 */
void print_digit_by_digit(int x, int y, int z, int t)
{
	if (x == ' ')
		_putchar(' ');
	else
		_putchar(x + '0');
	if (y == ' ')
		_putchar(' ');
	else
		_putchar(y + '0');
	if (z == ' ')
		_putchar(' ');
	else
		_putchar(z + '0');
	_putchar(t + '0');
}

