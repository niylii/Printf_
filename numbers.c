#include "main.h"

/**
 * binary - a function that converts an unsigned int to binary
 * @nb : the number to convert
 */

void  binary(unsigned int nb)
{
	int bi[32];
	int i = 0, j;

	if (nb == 0)
	{
		putchar('0');
	}
	while (nb > 0)
	{
		bi[i] = nb % 2;
		nb = nb / 2;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		putchar(bi[j--] + '0');
	}
}  
