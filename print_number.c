#include "holberton.h"
/**
 * print_number -  checks for checks for a digit (0 through 9).
 * @lista: n -  Variable
 * Return: Always 0.
 */
int print_number(va_list lista)
{
	unsigned int j, len, tmp, i;
	int count = 0, n;

	n = va_arg(lista, int);
	j = 0;
	len = 0;
	if (!n)
	{
		_putchar('0');
		return (1);
	}
	tmp = n;
	i = n;
	if (n < 0)
	{
		_putchar('-');
		count++;
		tmp = -n;
		i = -n;
	}
	while (tmp)
	{
		tmp = tmp / 10;
		len++;
	}
	tmp = 1;
	for (j = 1; j < len; j++)
	{
		tmp = tmp * 10;
	}
	for (j = 0; j < len; j++)
	{
		_putchar((i / tmp % 10) + '0');
		count++;
		tmp = tmp / 10;
	}
	return (count);
}
