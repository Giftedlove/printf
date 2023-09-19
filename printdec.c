#include "main.h"

/**
 * print_decimal - to print decimal
 * @ap: the decimal to print
 * Return: lenght
 */
int print_decimal(va_list ap)
{
	int num = va_arg(ap, int);
	unsigned int abs_num = num < 0 ? -num : num;
	int len = 0;

	if (num < 0)
	{
		_putchar('-');
		++len;
	}
	unsigned int divisor = 1;

	while (abs_num / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor)
	{
	_putchar(abs_num / divisor + '0');
	 ++len;
	 abs_num %= divisor;
	 divisor /= 10;
	}
	return (len);

}
