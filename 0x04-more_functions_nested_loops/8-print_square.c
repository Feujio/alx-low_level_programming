#include "main.h"

/**
 * print_square - draws a square to the terminal
 * @size: integer, the size of the square
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int i, j, character = 35;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar(character);
			_putchar('\n');
		}
	}
}
