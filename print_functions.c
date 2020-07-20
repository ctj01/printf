#include "holberton.h"
#include <stdio.h>

/**
 * print_character - print characters
 * @c : list arguments passed
 * Return: Always 1
 */

int print_character(va_list c)
{
	char character = va_arg(c, int);

	_putchar(character);
	return (1);
}

/**
 * prints_char - print strings
 * @s : arguments passed
 * Return: Always i
 */

int prints_char(va_list s)
{
	unsigned int i = 0;
	char *string = va_arg(s, char *);

	if (string)
	{
		while (string[i])
		{
			_putchar(string[i]);
			i++;
		}
	}
	if (string == NULL)
		string = "(null)";
	return (i);

}

/**
 * _iSplaceholder - check if placeholder passed on printf function is valid
 * @format: format
 * Return: place holder
 */


int (*_iSplaceholder(const char *format, ...))(va_list)
{
	unsigned int  d = 0;

	__printf print[] = {
		{"s", prints_char},
		{"c", print_character},
		{NULL, NULL}
	};

	while (print[d].c != NULL)
	{
		if (*print[d].c == *format)
		{
			break;
		}
		d++;
	}

	return (print[d].placeholder);
}

/**
 * _check_arg - check_arguments passed on prinf function
 * @format: format passed
 * Return: arguments passed
 */

int _check_arg(const char *format, ...)
{
	unsigned int i = 0, con = 0;
	va_list list;
	int (*flag)(va_list);

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			con++;
		}
		if (!format[i])
			return (con);
		flag = _iSplaceholder(&format[i + 1]);
		if (flag != NULL)
		{
			con += flag(list);
			i++;
		}
		if (!format[i + 1])
			return (-1);
		con++;
		i++;
	}
	va_end(list);
	return (con);
}