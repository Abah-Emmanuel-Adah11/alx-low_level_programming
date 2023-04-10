#include <stdio.h>

/**
 * main - A function that prints its name, followed by a new line
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */

int main(int argc, char *argv[])

{	int i;
	for (i = 0; i < argc; i++)
	{
		printf("argv index %d is = %s\n", i, argv[i]);
	}
	return (0);
}
