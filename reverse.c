#include "holberton.h"
 /**
  * reverse_array - prints a string
  * @lista: string
  * Return: string
  */
int _reverse(va_list lista)
{
	char *p, a;
	int i, j;

	p = va_arg(lista, char *);
	for (i = 0; p[i] != '\0'; i++)
	{
		;
	}
	for (j = i - 1 ; j >= 0; j--)
	{
		a = p[j];
		_putchar(a);
	}
	return (i);
}
