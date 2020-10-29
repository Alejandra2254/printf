#include "holberton.h"
/**
 * get_format - output according to a format
 * @s: first printf argument,string
 * Return: number of characters
 */
int (*get_format(char s))(va_list)
{
	int j = 0;
	form_ form1[] = {
		{"c", _char},
		{"s", _string},
		{"d", print_number},
		{"i", print_number},
		{"b", print_binary},
		{"r", _reverse},
		{NULL, NULL}
	};

	for (j = 0; form1[j].type != NULL; j++)
	{
		if (form1[j].type[0] == s)
		{
			return (form1[j].f);
		}
	}
	return (NULL);
}
/**
 * _printf - our printf function
 * @format: first printf argument,string
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
	va_list lista;
	int (*f)(va_list);
	int i = 0, count = 0;

	va_start(lista, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '%')
			{
				f = get_format(format[i + 1]);
				if (f)
					count = count + f(lista), i++;
				else
				{
					_putchar(format[i]);
					count++;
				}
			}
			else
			{
				_putchar(format[i]);
				count++;
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(lista);
	return (count);
}
