#include <stdio.h>

/**
 * main - print sum of multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int n = 1024;
	int sum = 0;

	do {
		n--;

		if ((n % 3) == 0 || (n % 5) == 0)
		{
			sum += n;
		}
	} while (n < 1024);

	printf("%d\n", sum);

	return (0);
}
