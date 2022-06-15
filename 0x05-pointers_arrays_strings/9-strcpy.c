#include "main.h"

/**
 * _strcpy - copy the strring pointed to bt src , including the
 * terminating null byte, to the buffer pointed to by dest
 * @dest: buffer
 * @src: the string to be copied
 * Return: always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
