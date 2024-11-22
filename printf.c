#include "main.h"
/**
 * specifiers - Array of structures mapping format specifiers to functions
 */

specifier_t specifiers[] = {
	{'c', prnt_character},
	{'s', prnt_string},
	{'%', mod},
	{'d', print_nbr},
	{'i', print_nbr},
	{'u', print_uns_nbr},
	{'b', binary},
	{'o', octal},
	{'x', hexa},
	{'X', hexaup},
	{'S', non_printable},
	{'p', pointer_address},
	{'r', revers},
	{'R', rot13},
	{0, NULL}
};

/**
 * _printf - a function that produces output according to a format.
 * @format : a string of characters
 * @(...): other arguments
 * Return: the number of characters printed (without '\0')
 */
int _printf(const char *format, ...)
{
	int len = 0, i, handled;
	va_list args;

	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
		    format++;
		    handled = 0;
		    for (i = 0; specifiers[i].c != 0; i++)
		    {
			if (*format == specifiers[i].c)
			{
			    len += specifiers[i].fun_pointer(args);
			    handled = 1;
			    break;
			}
		    }
		    if (!handled && *format)
			len += write(1, format, 1);
		}
		else
		    len += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (len);
}
