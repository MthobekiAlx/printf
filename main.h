#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct specifier - struct specifier
 * @valid: the valid character.
 * @p: the functions associated.
 *
 */

typedef struct specifier
{
	char *valid;
	int (*p)(va_list arg);
} spec;

int _printf(const char *format, ...);

#endif /* MAIN_H */
