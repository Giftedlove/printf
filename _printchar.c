#include "main.h"

/**
 * print_char - the main function
 * @ap: a variable list
 * Return: 1
 */

int print_char(va_list ap)
{
	int ch = va_arg(ap, int);

	_putchar(ch);
	return (1);
}
