#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: this program print base 16 in
 *	lowercase
 *
 *Return: always 0 (success)
*/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
