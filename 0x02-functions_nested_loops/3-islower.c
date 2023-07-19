/* File: is_lower.c */

#include "main.h"

*main - main function

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
}

