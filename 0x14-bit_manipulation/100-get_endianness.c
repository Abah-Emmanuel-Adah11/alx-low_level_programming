#include "main.h"

/**
 * get_endianness - A function that checks if a machine is little
 * or big endian
 *
 * Return: If big return 0 and 1 if little
 */

int get_endiannes(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
