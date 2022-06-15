#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: a pointer to a  character
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i, len, start;

	i = 0;
	len = 0;
	while (str[i] != '\0')
		i++;	
	len = i;
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2;
	for (i = start; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
