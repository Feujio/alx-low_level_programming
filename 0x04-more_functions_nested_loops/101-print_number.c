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
		if ((-1 * (n + 1)) == my_int_max)
		{
			extra += 1;
			n = n + 1;
		}
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
	int tens;

	tens = get_number_digits(n) / 10;
	do {
		_putchar(((n / tens) % 10) + '0');
		tens /= 10;
	} while (tens != 1);
	if (extra)
		_putchar(((n % 10) + 1) + '0');
	else
		_putchar((n % 10) + '0');
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

/**
 * get_number_digits - returns the number of single digit of an integer
 * @n: an integer to process
 * Return: an integer
 */
int get_number_digits(int n)
{
	int division, res = 0, tens = 1;

	do {
		res += 1;
		tens *= 10;
		division = n / tens;
	} while (division != n);
	return (tens);
}
