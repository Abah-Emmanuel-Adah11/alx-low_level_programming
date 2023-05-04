#include "main.h"

/**
 * set_bit - A function that sets the value of a bit 1 at a given index
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: if success 1 and -1 if failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

