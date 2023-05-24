#include "main.h"
/**
 *print_last_digit - printing last digit of a number
 *@n: number to extract from
 *Return: value of last digit
*/
int print_last_digit(int n)
{
	int v;

	if (n < 0)
		v = -1 * (n % 10);
	else
		v = n % 10;
	_putchar(v + 48);
	return (v);
}

