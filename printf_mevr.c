#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format : a string of characters
 * @(...): other arguments
 * Return: the number of characters printed (without '\0')
 */

int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;
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
					putchar(c);
					i++;
					break;
				}
				case 's':
				{
					char *s = va_arg(args, char *);
					while (*s)
					{
						putchar(*(s++));
						i++;
					}
					break;
				}
				case '%':
					putchar('%');
					i++;
					break;
				default :
					putchar(*format);
					break;
			}
		}
		else
		{
			putchar(*format);
			i++;
		}
		format++;
	}
	va_end(args);
	return (i);
}
