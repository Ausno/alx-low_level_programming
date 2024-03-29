#include "main.h"

/**
 * clear_bit - sets val of a given bit to 0
 * @n: pointer for the num to change
 * @index: index of bit to clear
 *
 * Return: 1 if successful, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
