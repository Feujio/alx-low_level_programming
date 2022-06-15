#include "main.h"

/**
 * _strncat - concatenates two strings using at most @n bytes from @src
 * @dest: a pointer to a character
 * @src: a pointer to a character
 * @n: integer
 * Return: a pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i++] = src[j];
	dest[i] = '\0';
	return (dest);
}
