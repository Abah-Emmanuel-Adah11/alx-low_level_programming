#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you would need
 * to flip to get from one to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int latest;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >=0; i--)
	{
		latest = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
