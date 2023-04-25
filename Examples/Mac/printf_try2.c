#include <stdio.h>
#include <stdarg.h>
/**
*_printf- produces output according to a format
*@format: string that is composed of zero or more directives
*Return: count
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
				{
					int c = va_arg(args, int);

					count += putchar(c);
					break;
				}
				case 's':
				{
					char *s = va_arg(args, char*);

					while (*s)
					{
						count += putchar(*s);
						s++;
					}
					break;
				}
				case '%':
				{
				count += putchar('%');
				break;
				}
				default:
				{
					count += putchar('%');
					count += putchar(*format);
					break;
				}
			}
		}
		else
		{
			count += putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
