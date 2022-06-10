#include "main.h"

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int num, digit, pos = n;
	double num_start = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			pos = n * -1;
			_putchar('-');
		}

		while (num_start <= pos)
			num_start *= 10;
		num = num_start / 10;

		while (num >= 1)
		{
			digit = pos / num;
			_putchar(digit + '0');
			pos = (pos - (num * digit));
			num /= 10;
		}
	}
}
