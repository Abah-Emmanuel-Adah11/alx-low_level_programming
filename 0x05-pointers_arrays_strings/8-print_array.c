#include "main.h"

/**
 * print_array - A ffunction that prints n elements of an array
 * of an integer folloewd b a new line.
 *
 * @a: parameter of function
 * @n: parameter of function
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; a[i] < a[n] ; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
