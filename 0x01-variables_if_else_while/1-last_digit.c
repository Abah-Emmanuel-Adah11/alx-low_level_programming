#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - This is the main function
 *
 * Return: 0 always
*/
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("last digit of %d is %d and is greater than 5", m, n);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0", m, n);
	else if (m < 6 && m != 0)
		printf("last digit %d is %d and is less than 6 and not 0", m, n);
	printf("\n");
	return (0);
}
