#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: this program print all the possible
 *	combinations of two numbers
 *
 *Return: always 0 (success)
*/
int main(void)
{
	int m, n;

	for (m = 0; m <= 8; m++)
	{
		for (n = m + 1; n <= 9; n++)
		{
			putchar(m + '0');
			putchar(n + '0');
			if (m != 8 || n != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

