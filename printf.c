#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
        const char *p;
        va_list ap;
        int count = 0;

        va_start(ap, format);

        for (p = format; *p; p++) {
                if (*p != '%') {
                        write(STDOUT_FILENO, p, 1);
                        count++;
                } else {
                        p++;
                        switch (*p) {
                        case 'c':
                                {
                                        char c = va_arg(ap, int);
                                        write(STDOUT_FILENO, &c, 1);
                                        count++;
                                        break;
                                }
                        case 's':
                                {
                                        char *s = va_arg(ap, char *);
                                        while (*s) {
                                                write(STDOUT_FILENO, s, 1);
                                                s++;
                                                count++;
                                        }
                                        break;
                                }
                        case '%':
                                write(STDOUT_FILENO, "%", 1);
                                count++;
                                break;
                        default:
                                write(STDOUT_FILENO, "%", 1);
                                write(STDOUT_FILENO, p, 1);
                                count += 2;
                        }
                }
        }

        va_end(ap);

        return count;
}

