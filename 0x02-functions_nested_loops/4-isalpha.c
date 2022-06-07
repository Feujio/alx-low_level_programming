#include "main.h"

int _islower(int c);
int _isupper(int c);

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check
 *
 * Return: On success 1; that is if @c is a letter, lowercase or uppercase
 * Otherwise return 0.
 */
int _isalpha(int c)
{
	return ((_islower(c) || _isupper(c)) ? 1 : 0);
}

/**
 * _islower - checks for lowercase character
 * @c: The charcater to check
 *
 * Return: 1 if @c is uppercase. 0 otherwise.
 */
int _islower(int c)
{
	return ((c >= 97 && c <= 122) ? 1 : 0);
}

/**
 * _isupper - checks for uppercase character
 * @c: The character to check
 *
 * Return: 1 if @c is uppercase. 0 otherwise.
 */
int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}
