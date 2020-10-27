# Printf project
### By Paola Carrero and Alejandra Higuera

The objective of this project is to gather concepts learned to date and unify them in several tasks to achieve a step-by-step replica of the printf function.

## Printf function

Many programming languages implement a function printf (print formatted), to display a formatted string. This, originally from the C programming language, has a prototype similar to the following:

```
int printf(const char* format,...)
```
where the string format provides a description of the output string according to the different variables and their writing formats.
for Example:

```
printf("%2d",   1234);
```
- where format is "%2d"
- number to print 1234

We are going to delve into how to write the format and the variables, according to how we manage to complete the different tasks. however here is a [quick guide](https://www.cypress.com/file/54761/download) to use printf.

## Project requirements

A summary of our requirements are:
- use of programming language c
- use of BEtty style, which is a way in which holberton teaches us to follow certain requirements, which in professional life are necessary as the use of comments and tabs.
- all the prototypes of the functions that we will create will be included in the header called holberton.h
- Teamwork, use of a repository on github with collaborators, where they must make a balanced amount of commits.

### Project execution guide

### holberton.h file

It is our header file, which contains the prototypes of the functions and will be included in the files as follows:

```
#include "holberton.h"
```
### _printf.c file

```
int _printf(const char *format, ...)
```
This function is the insert to go through the string format character by character and if:
- Find character, print it.
- Whenever it finds '%', it has two options, if the next character is another '%' it takes it as a character and prints; but if it finds something different it will enter the next function with the character:

```
int (*get_format(char s))(va_list)
```
where we have an array of type structure which will be traversed in search of the character that it comes with is equal to any that is in the array, if this happens the function will call the function corresponding to the character.

```
form_ form1[] = {
		{"c", _char},
		{"s", _string},
		{"d", print_number},
		{"i", print_number},
		{"b", print_binary},
		{NULL, NULL}
	};
```

### charstring.c file

This file contains two functions, the first is the call of the character 'c' and its function is to print a single character the second is the call of the character 's' and its function is to print a string of characters

```
int _char(va_list lista)
int _string(va_list lista)
```
### printnumber.c file

This function is the call of the character 'd' and 'i' to print numbers type integer.

```
int print_number(va_list lista)
```
