#include "main.h"
#include <stdarg.h>

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
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				count += print_char(args);
			else if (format[i + 1] == 's')
				count += print_str(args);
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
			}
			else if (format[i + 1] == '\0')
			{
				_putchar(format[i]);
				count++;
			}
			else
			{
				_putchar('%');
				_putchar(format[i + 1]);
				count += 2;
			}
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
