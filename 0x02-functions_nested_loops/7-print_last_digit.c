#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The character to process
 *
 * Return: a digit which is the last digit of @n.
 */
int print_last_digit(int n)
{
	long l_n = n;
	int res;

	if (n < 0)
		l_n *= -1;
	res = l_n % 10;
	_putchar(res + '0');
	return (res);
}
