#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always return 0 (Success)
*/
int main(void)
{
	char lowcase;

	for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
	{
		putchar(lowcase);
	}

	putchar('\n');
	return (0);
}
