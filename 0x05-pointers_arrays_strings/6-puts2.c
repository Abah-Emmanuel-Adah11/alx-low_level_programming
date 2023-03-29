#include "main.h"

/**
 * puts2 - A function that prints every other number of a string
 * starting from the first character followed by a new line.
 *
 * @str: char to check
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
