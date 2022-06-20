#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a pointer to a character, the pointer to the object to fill
 * @b: a character, the fill byte
 * @n: an integer, number of bytes to fill
 *
 * Return: a pointer to a character
 * Fills the first @n bytes of the memory area pointed to by @s
 * with the constant byte @b
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *ptr;

	while (i < n)
	{
		ptr = &s[i++];
		*ptr = b;
	}
	return (s);
}
