#include "main.h"

 /**
 * set_bit - function that sets a bit value to 1 at a given index
 * by Achakpo Isioma
 *
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, or
 *	 -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
