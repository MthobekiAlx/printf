#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_c - prints character
 * @arg: character argument
 * Return: number of characters
 */
int print_c(va_list arg)
{
	int c;

	c = va_arg(arg, int);
	return (_putchar(c));
}
/**
 * print_s - prints a string
 * @arg: string  argument
 * Return: number of characters
 */
int print_s(va_list arg)
{
	int i, count = 0;
	char *str;

	i = 0;
	str = va_arg(arg, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}
/**
 * print_percent - pass the percent sing
 * @arg: string  argument
 * Return: return the percent sing
 *
 */
int print_percent(va_list arg)
{
	char *str;

	str = "%";
	if (va_arg(arg, int) == *str)
	{
		return (*str);
	}
	return (*str);
}

/**
 * print_d - prints a decimal
 * @arg: decimal argument
 * Return: counter
 */
int print_d(va_list arg)
{

	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0;
	n = va_arg(arg, int);
		if (n < 0)
		{
			absolute = (n * -1);
			count += _putchar('-');
		}
		else
			absolute = n;

	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}
/**
 * print_i - prints integer
 * @args: integer argument
 * Return: the decimal function
 */

int print_i(va_list arg)
{
	return (print_d(arg));
}
