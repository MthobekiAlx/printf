#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "printf.h"
#include <stddef.h>

/**
 * _printf - a function that produces output 
 * @format: string
 * Return: number of string output
 */
int _printf(const char *format, ...)
{
int x, i = 0;
int (*n)(va_list);
va_list arg;

va_start(arg, format);
x = 0;

while (format != NULL && format[x] != '\0')
{
	if (format[x] == '%')
	{
		n = get_spec(format[x + 1]);
		i = n(arg);
		i += 2;
	}
	_putchar(format[x]);
	x++;
}
_putchar('\n');
va_end(arg);
return(i);
}
