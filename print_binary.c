#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_recursion - convert number to binary
 * @num: num to printed
 * Return: len of integer
 */
int binary_recursion(unsigned int num)
{
	unsigned int len1, len2;

	if (num < 2)
	{
		_putchar(num + '0');
		return (1);
	}
	len1 = 1 + binary_recursion(num / 2);
	len2 = !_putchar((num % 2 + '0'));
	return (len1 + len2);


}
/**
 * print_binary - convert numer to binary
 * @b: num to printed
 * Return: len of integer
 */

int print_binary(va_list b)
{
	unsigned int num;

	num = va_arg(b, unsigned int);

	return (binary_recursion(num));
}
