#include "main.h"

/**
 * print_nbr - function that printd an intiger as a character
 * @nb : the number
 * Return: the lenght
 */

int print_nbr(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	int div = 1;
	char c;

	if (n == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
		count++;
	}
	while (n / div > 10)
	{
		div *= 10;
	}
	while (div > 0)
	{
		c = (n / div) + '0';
		write (1, &c, 1);
		n %= div;
		div /= 10;
		count++;
	}
	return(count);
}

/**
 * print_uns_nbr - function that makes an unsigned intiger as a character
 * @nb : the number
 * Return: the lenght
 */

int print_uns_nbr(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;
	unsigned int div = 1;
	char c;

	if (n == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	while (n / div >= 10)
	{
		div *= 10;
	}
	while (div > 0)
	{
		c = (n / div) + '0';
		write (1, &c, 1);
		n %= div;
		div /= 10;
		count++;
	}
	return (count);
}
