#include "holberton.h"
/**
 * _char - prints a char
 * @lista: list of arguments
 * Return: 1
 */
int _char(va_list lista) /* si no es un solo caracter */
{
	unsigned int count = 0;
	char s;

	s = va_arg(lista, int);
	_putchar(s);
	count++;
	return (count);
}
/**
 * _string - prints a string
 * @lista: list of arguments
 * Return: numbers of iterations
 */
int _string(va_list lista)
{
	char *s;
	int i;

	s = va_arg(lista, char *);
	if (!s)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
