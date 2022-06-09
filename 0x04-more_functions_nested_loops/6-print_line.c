#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: integer, number of _ character
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int i, character = '_';

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar(character);
		_putchar('\n');
	}
}
