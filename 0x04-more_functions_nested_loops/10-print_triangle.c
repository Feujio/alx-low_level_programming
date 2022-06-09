#include "main.h"

/**
 * print_triangle - draws a triangle to the terminal
 * @size: integer, the size of the triangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i, j, character = 35;

	if (size <= 0)
		_putchar('\n');
	else if (size == 1)
	{
		_putchar(character);
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
				_putchar(' ');
			for (j = size - i - 1; j < size; j++)
				_putchar(character);
			_putchar('\n');
		}
	}
}
