#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of arguments
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(args, unsigned int));
			break;
		}
		if (separator == NULL)
		{
			printf("%d", va_arg(args, unsigned int));
		}
		else
		{
			printf("%d%s", va_arg(args unsigned int), separator);
		}
	}
	va_end(args);
}
