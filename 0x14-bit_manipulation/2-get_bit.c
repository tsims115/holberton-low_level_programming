#include <stdio.h>
#include "main.h"
/**
 * get_bit - get bit of n at  index
 * @n: number to get bit of
 * @index: index of bit to get
 * Return: value of the bit at the index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index) & 1;

	if (!n)
		return (-1);
	return  (bit);
}
