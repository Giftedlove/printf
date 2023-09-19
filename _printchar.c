#include "main.h"

/**
 * main - the main function
 * Return: 1
 */

int print_char(va_list ap)
{
    int ch = va_arg(ap, int);
    _putchar(ch);
    return (1);
}
