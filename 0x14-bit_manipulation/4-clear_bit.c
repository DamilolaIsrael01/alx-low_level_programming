#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: points to number to change
 * @index: index of bit to clear
 *
 * Returns: 1 if success and -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
