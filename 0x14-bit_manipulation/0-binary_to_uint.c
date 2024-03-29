#include "main.h"

/**
 * binary_to_uint - A function that convert a binary number number to an
 * unsigned int.
 *
 * @b: string that contains the binary number
 *
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int deci_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		deci_val = 2 * deci_val + (b[i] - '0');
	}

	return (deci_val);
}
