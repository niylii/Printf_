#include "main.h"

/**
 * binary - a function that converts an unsigned int to binary
 * @nb : the number to convert
 */

int  binary(unsigned int nb)
{
	int bi[32];
	int i = 0, j;
	int count = 0;
	char c;

	if (nb == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	while (nb > 0)
	{
		bi[i] = nb % 2;
		nb /= 2;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		c = bi[j] + '0';
		write (1, &c, 1);
		count++;
		j--;
	}
	return (count);
}

/**
 * print_nbr - function that printd an intiger as a character
 * @nb : the number
 */

int print_nbr(int n)
{
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
 */

int print_uns_nbr(unsigned int n)
{
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

/**
 * octal - function that converts the number to octal
 * @n : the number 
 * Return: the number in octal
 */

int octal(unsigned int n)
{
	int i = 0, count = 0;
	int j;
	char oc[32];

	if (n == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		oc[i++] = ((n % 8) + '0');
		n /= 8;
	}
	j = i - 1;
	while (j >= 0)
	{
		write (1, &oc[j], 1);
		count++;
		j--;
	}
	return (count);
}

/**
 * hexa - function that converts the number to hexadecimal
 * @n : the number 
 * Return: the number in hexadecimal
 */

int hexa(unsigned int n)
{
	int i = 0, count = 0;
	int j, mod;
	char he[32];

	if (n == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		mod = n % 16;
		if (mod < 10)
			he[i++] = (mod + '0');
		else
			he[i++] = ((mod - 10) + 'a');
		n /= 16;
	}
	j = i - 1;
	while (j >= 0)
	{
		write (1, &he[j], 1);
		count++;
		j--;
	}
	return (count);
}


/**
 * hexaup - function that converts the number to hexadecimal(UPPERCASE)
 * @n : the number 
 * Return: the number in hexadecimal
 */

int hexaup(unsigned int n)
{
	int i = 0, count = 0;
	int j, mod;
	char he[32];

	if (n == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		mod = n % 16;
		if (mod < 10)
			he[i++] = (mod + '0');
		else
			he[i++] = ((mod - 10) + 'A');
		n /= 16;
	}
	j = i - 1;
	while (j >= 0)
	{
		write (1, &he[j], 1);
		count++;
		j--;
	}
	return (count);
}

