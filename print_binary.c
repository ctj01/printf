#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - convert numer to binary
 * @b: num to printed
 * Return: len of integer
 */

int print_binary(va_list b)
{
	int count, i;
	unsigned int *a;

	unsigned int num;

	num = va_arg(b, unsigned int);
	a = malloc(sizeof(num));

	for (i = 0; num > 0; i++)
	{
		a[i]= num % 2;
		num = num / 2;
	}
	for (i = i -1; i >= 0; i--)
	{
		_putchar(a[i] + '0');
		count++;
	}
	free(a);
	return (count);

}
