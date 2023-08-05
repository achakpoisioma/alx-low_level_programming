#include "main.h"

/**
 * get_endianness - function that checks the endian status
 * by Achakpo Isioma
 *
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int ui = 1;
	char *c = (char *) &ui;

	return (*c);
}
