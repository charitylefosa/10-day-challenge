#include<stdio.h>
#include <stdarg.h>
/**
*_print_percent - handles percent conversion specifiers
*@i: integer to be printed
*Return: 1
*
*/
int _print_percent(int i)
{
	i = '%';
	putchar(i);
	return (1);
}
/**
*_print_char - handles character conversion specifiers
*@c: character to be printed
*Return: 1
*/
int _print_char(char c)
{
	putchar(c);
	return (1);
}
/**
*_print_string - handles string conversion specifiers
*@s : string to be printed
*Return: 1
*/
int _print_string(const char *s)
{
	int count;

	count =0;
	while (*s)
	{
		putchar(*s++);
		count++;
	}
	return (count);
}
/**
*_printf - count characters in string
*@format: character string composed of zero or more directives
*Return: count
*
*/
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
			switch (*p)
			{
				case '%':
					count += _print_percent(va_arg(args, int));
					break;
				case 'c':
					count += _print_char(va_arg(args, int));
					break;
				case 's':
					count += _print_string(va_arg(args, const char *));
					break;
				default:
					putchar(*p);
					count++;
					break;
			}

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
