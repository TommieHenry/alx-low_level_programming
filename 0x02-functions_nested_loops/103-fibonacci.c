#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci number
 * less than 4000000.
 * Return: Nothing!
 */

int main(void)
{
	long j = 1;
	long k = 2;
	long sum = k;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
			sum += k;
		j = k - j;
	}
	printf("%ld\n", sum);
	return (0);
}
