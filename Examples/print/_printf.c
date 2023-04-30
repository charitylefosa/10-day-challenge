#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
* _printf - produces output according to a format
* @format: format string containing the characters and the specifiers
* Return: length of the formatted output string
*/
int handle_specifier(char format, va_list args)
{
	int count = 0;

	switch (format)
	{
		case '%':
			count += print_percent();
			break;
		case 'c':
			count += print_char(va_arg(args, int));
			break;
		case 's':
			count += print_string(va_arg(args, const char *));
			break;
		case 'r':
			count += print_string("%r");
			break;
		case 'd':
		case 'i':
			count += print_number(va_arg(args, int));
			break;
		case 'u':
			count += print_unsigned_int(va_arg(args, unsigned int));
			break;
		case 'o':
			count += print_octal(va_arg(args, unsigned int));
			break;
		case 'x':
			count += print_hex(va_arg(args, unsigned int), 0);
			break;
		case 'X':
			count += print_hex(va_arg(args, unsigned int), 1);
			break;
		case 'b':
			count += print_binary(va_arg(args, unsigned int));
			break;
		default:
			putchar('%');
			putchar(format);
			count+=2;
	}
	return (count);
}
int _printf(const char *format, ...)
{
	va_list args;
	int count;
	const char *p;

	va_start(args, format);

	p = format;
	count = 0;
	while (*p)
	{
		if (*p == '%')
		{
			p++;
			count += handle_specifier(*format, args);
		}
		else
		{
			putchar(*p);
			count++;
		}
		p++;
	}
	va_end(args);
	return (count);
}
