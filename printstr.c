#include "main.h"

/**
 * print_string - to print strings
 * @ap: string to be printed
 * Return: string lenght
 */
int print_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	int len = 0;

	if (str == NULL)
		str = "(null)";

	for (; *str; ++str)
	{
		_putchar(*str);
		++len;
	}
	return (len);
}
