#ifndef MAIN_H
#define MAIN__H
#include <stdio.h>
#include <stdarg.h>

typedef struct specifier
{
	char*vaild;
	int (*p)(va_list arg);
}spec;

int _printf(const char *format, ...);

#endif /* MAIN_H */
