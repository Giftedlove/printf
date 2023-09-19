#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
typedef int (*print_func_t)(va_list);
int _putchar(char c);
int print_char(va_list ap);
int print_string(va_list ap);
int print_decimal(va_list ap);
int _printf(const char *format, ...);

#endif
