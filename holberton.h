#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>

/**
 * struct _print - print type with corresponding print function
 * @c: print placeholder
 * @placeholder: print function
 */
typedef struct _print
{
	char *c;
	int (*placeholder)(va_list);

} __printf;

int (*_iSplaceholder(const char *format, ...))(va_list);
int _check_arg(const char *format, ...);
int _printf(const char *format, ...);
int _putchar(char c);
int print_character(va_list c);
int prints_char(va_list s);

#endif
