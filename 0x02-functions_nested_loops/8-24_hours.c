#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: Nothing
 * Description: the count-up starts at 00:00 and ends at 23:59
 */
void jack_bauer(void)
{
	int i, j, first_digit_i, first_digit_j, last_digit_i, last_digit_j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			last_digit_i = i % 10;
			first_digit_i = i / 10;
			_putchar(first_digit_i + '0');
			_putchar(last_digit_i + '0');
			_putchar(':');
			last_digit_j = j % 10;
			first_digit_j = j / 10;
			_putchar(first_digit_j + '0');
			_putchar(last_digit_j + '0');
			if (i == 23 && j == 59)
				break;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
