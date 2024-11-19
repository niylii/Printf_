#include "main.h"
/**
 * prointer_address - function that prints the adress of a pointer in hexadecimal
 * @p :the pointer
 * Return : the lenght
 */

int pointer_address(void *p)
{
	int i = 0, k = 0, j, mod;
	char adrs[20] = {0}, tmp[20] = {0};
	int count = 0;

	unsigned long n = (unsigned long)p;
	while (n > 0)
	{
		mod = n % 16;
		mod < 10 ? (tmp[i++] = mod + '0') : (tmp[i++] = ((mod - 10) + 'a'));
		n /= 16;
	}
	j = i - 1;
	adrs[0] = '0';
	adrs[1] = 'x';
	k = 2;
	while (j >= 0)
	{
		adrs[k++] = tmp[j--];
	}
	k = 0;
	while (adrs[k] != '\0')
	{
		write(1, &adrs[k], 1);
		k++;
		count++;
	}
	adrs[k] = '\0';
	return (count);
}

/**
 * revers - a function that prints the reversed string
 * @s : the string
 * Return: the lenght
 */

int revers(char *s)
{
	int i = 0, j;
	while (s[i])
		i++;
	j = i - 1;
	while (j >= 0)
	{
		write(1, &s[j], 1);
		j--;
	}
	return (i);
}

/**
 * rot13 - a function that prints the rot13'ed string
 * @s : the string
 * Return: the lenght
 */

int rot13(char *s)
{
	int i = 0;

	if (s == NULL)
        	return 0;
	while (s[i])
	{
		if (('a' <= s[i] && s[i] <= 'n') || ('A' <= s[i] && s[i] <= 'N'))
			s[i] = s[i] + 13;
		else if (('m' <= s[i] && s[i] <= 'z') || ('M' <= s[i] && s[i] <= 'Z'))
			s[i] = s[i] - 13;
		write (1, &s[i],1);
		i++;
	}
	s[i] = '\0';
	return (i);
}
