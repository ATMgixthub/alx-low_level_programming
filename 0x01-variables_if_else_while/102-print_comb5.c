#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num3 = '0'; num3 <= '9'; num3++)
	{
		for (num2 = (num3 + 1); num2 <= '9'; num2++)
		{
			for (num1 = (num2 + 1); num1 <= '9'; num1++)
			{
				putchar(num3);
				putchar(num2);
				putchar(num3);
				if (num3 != '7' || num2 != '8' || num1 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
