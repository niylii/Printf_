#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format : a string of characters
 * @(...): other arguments
 * Return: the number of characters printed (without '\0')
 */

int _printf(const char *format, ...)
{
	int len = 0;
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
					len += prnt_character(va_arg(args, int));
					break;
				}
				case 's':
				{
					len += prnt_string(va_arg(args, char *));
					break;
				}
				case '%':
				{
					len += mod();
					break;
				}
				case 'd':
				case 'i':
				{
					len += print_nbr(va_arg(args, int));
					break;
				}
				case 'u':
				{
					len += print_uns_nbr(va_arg(args, unsigned int));
					break;
				}
				case 'b':
				{
					len += binary(va_arg(args, unsigned int));
					break;
				}
				case 'o':
				{
					len += octal(va_arg(args, unsigned int));
					break;
				}
				case 'x':
				{
					len += hexa(va_arg(args, unsigned int));
					break;
				}
				case 'X':
				{
					len += hexaup(va_arg(args, unsigned int));
					break;
				}
				case 'S':
				{
					len += non_printable(va_arg(args, char *));
					break;
				}
				case 'p':
				{
					len += pointer_address(va_arg(args, void *));
					break;
				}
				case 'r':
				{
					len += revers(va_arg(args, char *));
					break;
				}
				case 'R':
				{
					len += rot13(va_arg(args, char *));
					break;
				}
				default :
				{
					write(1, format, 1);
					len++;
					break;
				}
			}
		}
		else
		{
			write(1, format, 1);
			len++;
		}
		format++;
	}
	va_end(args);
	return (len);
}
