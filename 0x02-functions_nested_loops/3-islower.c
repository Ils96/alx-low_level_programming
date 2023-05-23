#include "main.h"
/**
 *_islower - check if lower
 *
 *@c: is the char checked
 *
 *Return: 1 if c is lower case, if not return 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
