#include <unistd.h>

/**
 * _putchar - writes the character c to stdout output
 * @c: is the character to print
 *
 * Return: On success 1 only
 * On error, -1 is returned, and errno is set appropriate
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
