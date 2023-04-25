#include<stdio.h>
#include<stdlib.h>
#include"main.h"
#include<stdarg.h>
/*
*
*
*
*/
int _print(const char *format, ...)
{
	va_list args;
	char *s;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*(++format))
			{
				case 'c':
					putchar(va_arg(args, int));
					break;
				case 's':
					while (s = va_arg(args, char *) || *s != '\0')
					{
						putchar(*s);
						s++;
					}
					break;
				case '%':
					putchar('%');
					break;
				default:
					putchar('%');
					putchar(*format);
					break;
			}
		}
		else
			putchar(*format);
	}
	++format;
	return (format);
}
