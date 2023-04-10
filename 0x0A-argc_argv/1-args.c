#include <stdio.h>

/**
 * main - A function that prints its name, followed by a new line
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
