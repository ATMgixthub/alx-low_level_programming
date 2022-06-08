#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;
	long a = 1;
	long b = 2;

	for (i = 1; i <= (50 / 2); i++)
	{
		if (50 % 2 == 1)
			printf("%li", a);

		printf("%li, %li, ", a, b);
		a += b;
		b += a;
	}
	printf("\n");

	return (0);
}
