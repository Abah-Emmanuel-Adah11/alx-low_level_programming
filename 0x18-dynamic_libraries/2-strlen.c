#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 *
 * @s: char to check
 *
 * Return: lemght of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
