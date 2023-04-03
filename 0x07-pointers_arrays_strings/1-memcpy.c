#include "main.h"

/**
 * _memcpy - A function that copies 'n' bytes from the memory area pointed
 * to by 'src' into that pointed to by 'dest'
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy the character from.
 * @n: The number to copy from @src
 *
 * Return: A pointer to the destination buffer @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	unsigned char *destination = dest;

	comst unsigned char *source = src;

	for (index = 0; indx < n; index++)
		destination[index] = source[index];

	return (dest);
}
