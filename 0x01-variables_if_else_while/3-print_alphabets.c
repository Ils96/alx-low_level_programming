#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: this program print the alphabet
 *	in lower and then in uppercase
 *
 *Return: always 0 (success)
*/

int main(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	letter = 65;

	while (letter <= 90)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

