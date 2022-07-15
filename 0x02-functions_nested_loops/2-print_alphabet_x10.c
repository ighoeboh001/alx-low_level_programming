#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	char p;
	int d;

	for (d = 0; d<='z'; p++)
	{
	for (p = 'a'; p <= 'z'; p++)
	{
	-putchar(p);
	}
	_putchar('\n');
	}
}
