#include "holberton.h"
/**
 *_strcmp - compare two strings
 * @s1: string compared to s2
 * @s2: s1 is compared to this
 *
 * Return: positive, zero, or negative number if s1 is greater, equal, or less
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int len1 = 0;
	int len2 = 0;

	while (*s1 != '\0')
	{
		len1++;
		s1++;
	}
	s1 -= len1;
	while (*s2 != '\0')
	{
		len2++;
		s2++;
	}
	s2 -= len2;
	for (i = 0; i < len2; i++)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
