#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a string
 * Return: an integer which is the length of @s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
