#include "main.h"
#include <unistd.h>

/**
 * _putchar - the function that prints a single char.
 * @c: a variable of type char.
 * Return: write
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
