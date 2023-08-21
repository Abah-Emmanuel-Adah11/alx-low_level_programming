#include "main.h"

/**
 * _strcpy - A function that copy strings from a pointed to another
 * including the null byte (\0)
 *
 * @src: source array from whence we will copy
 * @dest: destination array
 *
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
