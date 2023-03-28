#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/* Function prototypes */
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_unsigned_int(va_list args);
int print_hex(va_list args);
int print_hex_upper(va_list args);
int print_binary(va_list args);
int print_octal(va_list args);
int print_pointer(va_list args);
int print_custom(va_list args, const char **fmt);
int print_percent(va_list args);
void _puts(char *str);
char *_uitoa(unsigned int num, char *buffer, int base);
int _strlen(const char *str);
void _reverse(char *str);
void _memcpy(char *dest, const char *src, unsigned int n);

#endif /* MAIN_H */
