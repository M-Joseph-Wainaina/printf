#include "main.h"

/**
 * c_handler - handles %c 
 * @str: string to be edited
 * @c: char
 * Return: poiter to new space
 */

char *c_handler(char *str, int i, va_list args)
{
	int len;
	char *c_h;
	int a, b;

	len = _strlen(str);
	c_h = malloc(sizeof(char) * len + 1);

	for (a = 0, b = 0; a <= len; a++, b++)
	{
		if (a == i)
		{
			c_h[a] = va_arg(args, int);
			b += 1;
			continue;
		}
		c_h[a] = str[b];
	}
	return (c_h);
}
