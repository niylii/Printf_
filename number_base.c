#include "main.h"

/**
 * binary - a function that converts an unsigned int to binary
 * @nb : the number to convert
 * Return: the lenght
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
 * octal - function that converts the number to octal
 * @n : the number 
 * Return: the lenght
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
 * Return: the lenght
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
 * Return: the lenght
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

