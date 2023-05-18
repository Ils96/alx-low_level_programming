#include <unistd.h>
#include <fcntl.h>

/**
 * main - Entry point
 *
 *Description: this is aprogram that print
 *		a text with using write function
 * Return: always 1 (success)
*/

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, msg, 59);
	return (1);
}

