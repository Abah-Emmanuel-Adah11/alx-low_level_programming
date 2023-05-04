#include "main.h"

/**
 * clear_bit - A function that sets value of a bit 0 at a given index
 * @n: pointer to the number to be changed
 * @index: index of the bit to clear
 *
 * Return: if success return 1 and -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
