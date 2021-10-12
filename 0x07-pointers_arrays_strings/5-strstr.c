#include "main.h"
#define NULL 0
/**
 * _strstr - locates a substring in string
 * @haystack: stack of hay to search
 * @needle: needle to find
 *
 * Return: first occurence of the needle otherwise null
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (NULL);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == '\0')
					break;
				if (needle[j] == haystack[i + j])
					continue;
				break;
			}
			if (needle[j] == '\0')
			{
				haystack += i;
				return (haystack);
			}
		}
	}
	return (NULL);
}
