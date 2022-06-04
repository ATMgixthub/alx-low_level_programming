#include <stdio.h>

/**
 *main - print lowercase alpha a-z but remove 'q' and 'e'
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if ((alpha == 'q') || (alpha == 'e'))
		{
			continue;
		}

		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
