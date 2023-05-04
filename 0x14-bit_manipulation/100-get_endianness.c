#include "main.h"

/**
 * get_endianess - A function that checks if a machine is little or big endian
 * Return: If big return 0 and 1 if little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
