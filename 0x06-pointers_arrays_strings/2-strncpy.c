#include "main.h"

/**
 * _strncpy - copy at most n bytes of the string pointed to by src ,
 * including the terminating null byte, to the buffer pointed to by dest
 * @src: a pointer to a character
 * @dest: a pointer to a character
 * @n: an integer
 * Return: always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
