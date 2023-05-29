#include "main.h"

/**
 *_strlen - return the length of string
 *
 *@s: the input string
 *
 *Return: the length of the string
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
