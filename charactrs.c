#include "main.h"

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
