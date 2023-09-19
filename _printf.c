#include "main.h"

/**
 * _printf - it replicates the standard printf function in c
 * @format: the method it should be
 * Return: lenght
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int length = 0;

	va_start(ap, format);

	while (*format)
	{
	if (*format == '%' && *(format + 1) != '\0')
	{
		++format;
		switch (*format++)
		{
			case '%':
			length += _putchar('%');
			break;
			case 'c':
			length += print_char(ap);
			break;
			case 'i':
			case 'd':
			length += print_decimal(ap);
			break;
			case 's':
			length += print_string(ap);
			break;
			default:
			_putchar(*(format - 1));
			++length;
			break;
		}
	}
	else
	{
		length += _putchar(*format++);
	}
	}
	va_end(ap);
	return (length);
}
