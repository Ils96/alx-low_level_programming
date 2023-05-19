#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: this program print base 10 numbers using putchar
 *
 *Return: always 0 (success)
*/
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar ('\n');
	return (0);
}
