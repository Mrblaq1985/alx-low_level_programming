#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 1 if little, 0 if big
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
