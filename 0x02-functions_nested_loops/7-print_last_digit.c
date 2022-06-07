#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The character to process
 *
 * Return: a digit which is the last digit of @n.
 */
int print_last_digit(int n)
{
	int res = n >= 0 ? n % 10 : (-1*n) % 10;

	_putchar(res + '0');
	return (res);
}
