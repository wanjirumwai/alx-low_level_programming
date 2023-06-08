#include "main.h"

/**
 * get_endianness -This function will check if
 * an element is little or big endian
 *
 * Return: 0 if big endian, 1 if liitle endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
