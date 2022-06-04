#include <stdio.h>

/**
 *main - prints hexadecimal base 0123456789abcdef, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	char a_f = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (a_f <= 'f')
	{
		putchar(a_f);
		a_f++;
	}
	putchar('\n');

	return (0);
}
