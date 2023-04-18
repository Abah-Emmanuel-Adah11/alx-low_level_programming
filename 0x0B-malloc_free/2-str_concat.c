#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newwly allocated space in memory
 * which contains the contents of s1, followed by the content
 * of s2 and null taminated. NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *result;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; j++)
		result[i] = s2[j];
	result[len] = '\0';

	return (result);
}