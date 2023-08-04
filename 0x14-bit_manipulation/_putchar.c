#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 On success
 * On error, -1 is returned, and error is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
