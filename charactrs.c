#include "main.h"

/**
 * prnt_character - a function that prints a character
 * @c : the character to be printed
 * Return: the lenght
 */
int prnt_character(char c)
{
	write (1, &c,1);
	return (1);
}

/**
 * prnt_string - a function that prints a string
 * @s : the string to be printed
 * Return: the lenght
 */
int prnt_string(char *s)
{
	int i = 0;

	if (s == NULL)
		s = "null";
	while (*s)
	{
		write (1, s, 1);
		s++;
		i++;
	}
	return (i);
}

/**
 * mod - a function that prints literally "%"
 * Return: the lenght
 */
int mod(void)
{
	write (1, "%",1);
	return (1);
}

/**
 * non_printable - functions that prints the ascii code in hexadecimal of non printable characters
 * @c: the non pritable character
 */
int non_printable(char *c)
{
	unsigned int n;
	int i = 0, count = 0;
	char he[3];
	while (c[i] != '\0')
	{
		if (c[i] < 32 || c[i] >= 127)
		{
			write(1, "\\", 1);
			write(1, "x", 1); 
			n = (unsigned int )c[i];
			he[0] = (n / 16) < 10 ? (n / 16) + '0' : (n / 16 - 10) + 'A';
			he[1] = (n % 16) < 10 ? (n % 16) + '0' : (n % 16 - 10) + 'A';
			write(1, he, 2);
			count +=4;
		}
		else
		{
			write(1, &c[i], 1);
			count++;
		}
		i++;
	}
	return (count);
}
