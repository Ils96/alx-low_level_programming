#include <unistd.h>
#include <fcntl.h>

/**
 * main - Entry point
 *
 * Return: always 1 (success)
*/
int main (void)
{
	int f;
	f =write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}

