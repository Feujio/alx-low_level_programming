#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a pointer to a character
 * @src: a pointer to a character
 * Return: a pointer to a character
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
		dest[i++] = src[j];
	dest[i] = '\0';
	return (dest);
}
