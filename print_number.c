#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * printnum_recursion - print_numbers usin recursion
 * @num : num to printed
 * Return: nothing
 */

void printnum_recursion(int num)
{
	unsigned int n = num;

	if (n  / 10 != 0)
		printnum_recursion(n / 10);
	_putchar(n % 10 + '0');
}

/**
 *  _counter - get the large of integer
 * @num : num to printed
 * Return: len of integer
 */

int _counter(int num)
{
	int counter = 0;
	unsigned int n = num;

	while (n > 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

/**
 * print_d - decimal
 * @d : list arguments passed
 * Return: Always 1
 */
int print_d(va_list d)
{

	int count = 0;
	int num = va_arg(d, int);

	if (num < 0)
	{
		num = -(num);
		_putchar('-');
		count++;
	}
	if (num == 0)
		count++;
	count += _counter(num);
	printnum_recursion(num);
	return (count);
}

/**
 * print_int - print integer
 * @i : list arguments passed
 * Return: Always 1
 */

int print_int(va_list i)
{
	int count = 0;
	int num = va_arg(i, int);

	if (num < 0)
	{
		num = -(num);
		_putchar('-');
		count++;
	}
	if (num == 0)
		count++;
	count += _counter(num);
	printnum_recursion(num);
	return (count);
}
