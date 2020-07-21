#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_d - decimal
 * @d : list arguments passed
 * Return: Always 1
 */

int print_d(va_list d)
{
	int *a;
	int j, m, n, sum, count, t;


	a = malloc(sizeof(va_arg(d, int)) * 4);
	if (a == NULL)
		return (0);
	count = 0;
	m = 1000000000;

	n = va_arg(d, int);

	t =  n / m;
	*a = t;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	free(a);
	return (count);
}

/**
 * print_int - print integer
 * @i : list arguments passed
 * Return: Always 1
 */

int print_int(va_list i)
{
	int *a;
	int j, m, n, sum, count, t;

	a = malloc(sizeof(va_arg(i, int)) * 4);
	if (a == NULL)
		return (0);
	count = 0;
	m = 1000000000;

	n = va_arg(i, int);
	t =  n / m;
	*a = t;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	free(a);
	return (count);
}
