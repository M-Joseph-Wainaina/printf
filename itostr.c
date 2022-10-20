#include "main.h"

int _pow(int power, int exp, int base);
int _count(int n);

/**
 * itostr - converts and integer to string
 * @n: integer to converted
 * Return: char pointer
 */

char *itostr(int n)
{
	int len, i;
	char *str;

	len = _count(n);
	str = malloc(sizeof(char) * len);

	for (i = len - 1; i >= 0; i--)
	{
		str[i] = '0' + n % 10;
		n = n / 10;
		/*printf("%c", str[i]);*/
	}
	return (str);
}

/**
 * _count - counts the length of an integer
 * @n: integer to be counted
 * Return: integer length
 */

int _count(int n)
{
	int len;
	int i;

	len = 0;
	i = 1;
	while (n / i)
	{
		len++;
		i = _pow(1, len, 10);
	}
	return (len);
}

/**
 * _pow - powers inputs
 * @base: base no
 * @exp: exponent value
 * @power: result
 * Return: power
 */

int _pow(int power, int exp, int base)
{
	if (exp == 0)
	{
		return (power);
	}
	power = power * base;
	return (_pow(power, --exp, base));
}
