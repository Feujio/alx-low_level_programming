#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: integer, number of times the chaacter \ should be printed
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j, character = 92;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(character);
			_putchar('\n');
		}
	}
}
