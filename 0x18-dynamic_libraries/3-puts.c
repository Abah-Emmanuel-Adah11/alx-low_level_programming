#include "main.h"

/**
 * _puts - Write a function that prints a string, fowwelled by a new line
 *
 * @str: char to check
 *
 * Return: 0 or 1
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');

}

