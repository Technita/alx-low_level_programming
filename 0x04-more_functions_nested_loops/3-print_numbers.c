#include <stdio.h>

int _putchar(char c);

void print_numbers(void)
{
    char num;

    for (num = '0'; num <= '9'; num++)
    {
        _putchar(num);
    }

    _putchar('\n');
}

/* The _putchar function implementation is assumed to be available elsewhere. */


