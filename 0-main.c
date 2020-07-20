#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{  char *hola = "hey";
	int len;
	len  =_printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
    _printf("%hyrdsdff\n", hola);
    _printf("%d\n", 98);

    return (0);
}
