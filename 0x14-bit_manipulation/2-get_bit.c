#include "main.h"

/**
 * get_bit -This function will show you how to
 * return the value of a bit at an indx in a decimal number
 * @n:Pointer to the number to search
 * @index: shows the index of the bit
 *
 * Return:Intended value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
