#include "main.h"

/**
 * print_line -prints various sizes of line
 *
 * @n: char to check
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
