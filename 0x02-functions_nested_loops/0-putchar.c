#include "main.h"
/**
 *main - Entry point
 *
 *Description: this is a program that print "_putchar"
 *
 *Return: always 0 (success)
*/
int main(void)
{
	char ch[] = _putchar;
	int put;

	for (put = 0; put < 8; put++)
		_putchar(ch[put]);
	_putchar('\n');
	return (0);
}
