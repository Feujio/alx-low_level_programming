#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The character to check
 *
 * Return: 1 if @n is greater than 0, 0 is @n is zero,
 * and -1 if @n is less than zero
 * Prints + if n is greater than 0, prints 0 if @n is zero,
 * and prints - if @n is less than zero
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);
}
