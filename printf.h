#ifndef PRINTF_H
#define PRINTF_H
#include <stdio.h>
#include <stdarg.h>

typedef struct specifier
{
	char*vaild;
	int (*p)(va_list arg);
}spec;

int _printf(const char *format, ...);

#endif /* PRINT_H */
