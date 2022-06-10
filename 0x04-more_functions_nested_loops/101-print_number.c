#include "main.h"

int get_int_max(int bits);
int get_number_digits(int n);
void print_digit_by_digit(int n, int extra);

/**
 * print_number - prints an integer
 * @n: The integer to be printed
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	int my_int_max, extra = 0;

	my_int_max = get_int_max(32);
	if (n < 0)
	{
		_putchar('-');
		if (n == ((-1 * my_int_max) - 1))
		{
			extra = 1;
			n = n + 1 * (-1);
		}
		else
			n *= -1;
		print_digit_by_digit(n, extra);
	}
	else if (n < 10)
		_putchar(n + '0');
	else
		print_digit_by_digit(n, extra);
}

/**
 * print_digit_by_digit - print a positive integer number by number
 * @n: an integer
 * @extra: an integer, used for case INT_MIN
 * Return: Nothing
 */
void print_digit_by_digit(int n, int extra)
{
	int aux, res, i, division, numbDigit = 1, tens = 10;

	while (n - division != 0)
	{
		numbDigit += 1;
		tens *= 10;
		division = n % tens;
	}
	tens /= 10;
	for (i = numbDigit; i > 0; i--)
	{
		res = n / tens;
		aux = res * tens;
		n -= aux;
		if (i == 1 && extra == 1)
		{
			res += 1;
			_putchar(res + '0');
		}
		else
			_putchar(res + '0');
		tens /= 10;
	}
}

/**
 * get_int_max - computes and returns INT_MAX
 * @bits: integer, number of bits in memory for an integer
 * Return: an integer
 */
int get_int_max(int bits)
{
	int i, res = 1;

	for (i = 0; i < bits - 1; i++)
		res *= 2;
	return (res - 1 + res);
}
