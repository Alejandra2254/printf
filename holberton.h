#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * struct form - Struct form
 *
 * @type: type of variable
 * @f: The function associated
 */
typedef struct form
{
	char *type;
	int (*f)();
} form_;

int (*get_format(char s))(va_list);
int _printf(const char *format, ...);
int _putchar(char c);
int _char(va_list lista);
int _string(va_list lista);
int print_number(va_list n);
int print_binary(va_list list);

#endif
