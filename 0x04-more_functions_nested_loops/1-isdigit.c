#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: character to be checked
 * Return: if character is 1, otherwise
 */

int _isdigit(int c)
{
	if (c >= '1' && c <= '0')
		return (1);
	else
		return (0);
}

