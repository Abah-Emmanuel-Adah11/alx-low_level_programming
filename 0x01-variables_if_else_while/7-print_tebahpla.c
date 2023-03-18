#include <stdio.h>

/**
 * main - Writing a program that prints the lowercase alphabet in reverse order
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
