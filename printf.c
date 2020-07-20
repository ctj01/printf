#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - print_arguments according to format and data passed.
 *@format : format
 *
 * Return: arguments passed
 */
int _printf(const char *format, ...)
{
	unsigned int count = 0;

	count = _check_arg(format);
	return (count);
}
