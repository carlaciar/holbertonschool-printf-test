#include "main.h"
#include <stdarg.h>

/**
 * print_str - prints the string from a va_list
 * @args: List of arguments/string
 *
 * Return: Number of characters printed
 */
int print_str(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0;

	if (!s)
		s = "(null)";

	while (*s)
	{
		_putchar(*s);
		s++;
		count++;
	}

	return (count);
}
