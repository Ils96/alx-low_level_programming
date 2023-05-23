#include "main.h"
/**
 *main - Entry point
 *
 *Description: this is a program that print the alphabet in lower case
 *
 *Return: always 0 (success)
*/
void print_alphabet(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)

		_putchar(lett);

	_putchar('\n');
}
