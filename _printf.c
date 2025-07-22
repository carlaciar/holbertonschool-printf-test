#include "main.h"

/**
 * _printf - function that prints characters and strings
 * @format: the string
 *
 * Return: the string and its arguments
 *
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		while (format[i] == '%')
		{
			i++;
		
			if (format[i] == 'c')
				print_char(args);
		}
	}

	return (count);
	va_end;
}
