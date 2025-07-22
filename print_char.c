#include "main.h"
#include <stdarg.h>

/**
 * print_char - Prints a character from a va_list
 * @args: List of arguments
 *
 * Return: Number of characters printed (always 1)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
